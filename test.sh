#!/bin/bash

dir=$1

if [ -z "$1" ]; then
    echo "No arguments supplied"
    exit 1
fi

for filename in $dir/*; do
    tput setaf 2; echo "Testing:" $filename
    tput sgr0
    python3 main.py $filename
    echo ""
done
