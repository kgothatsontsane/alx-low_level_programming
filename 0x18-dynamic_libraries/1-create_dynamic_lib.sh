#!/bin/bash
gcc -Wall -Wextra -pedantic -c -fPIX *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
