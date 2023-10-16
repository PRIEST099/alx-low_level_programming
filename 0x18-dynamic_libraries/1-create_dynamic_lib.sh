#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c -fPIC *.c
gcc -shared liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
