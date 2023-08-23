#!/bin/bash
# by - muzzo
# A C Script that creates a dynamic library called liball.so from all the .c files that are in the current directory. 
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
