#!/bin/bash
# Crear un fitxer d'intercanvi de 8GB
dd if=/dev/zero of=/swapfile bs=1MiB count=$((8*1024))
chmod 0600 /swapfile
mkswap /swapfile
swapon /swapfile
