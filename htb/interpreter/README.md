# interpreter — HackTheBox

Exploits usados na resolução desta máquina.

**Writeup:** https://s3r4ph1el.github.io/acta/hackthebox/interpreter/

| Plataforma | Dificuldade | OS |
|---|---|---|
| HackTheBox | Medium | Linux |

## Scripts

- `exploit.py` — CVE-2023-43208 - Mirth Connect <4.4.1 XStream deserialization pre-auth RCE
- `hash_convert.py`
- `rce_exfil.sh` — Executa comando no alvo via CVE-2023-43208 e exfiltra output (base64) via wget
- `rce.py` — Privesc: f-string injection em notif.py (root, 127.0.0.1:54321)
