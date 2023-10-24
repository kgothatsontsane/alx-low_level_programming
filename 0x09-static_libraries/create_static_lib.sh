#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -c *.c
ar rcs liball.a *.o
ranlib liball.a
