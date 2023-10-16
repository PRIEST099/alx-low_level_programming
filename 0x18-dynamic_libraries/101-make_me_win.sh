#!/bin/bash
gcc -shared -o hack.so -fPIC hack.c
export LD_PRELOAD=./hack.so:$LD_LIBRARY_PATH
