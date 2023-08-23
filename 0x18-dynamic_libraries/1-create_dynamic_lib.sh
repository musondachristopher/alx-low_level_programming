#!/bin/bash
# by - muzzo
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
