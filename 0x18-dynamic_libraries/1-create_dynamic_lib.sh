#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra *.c -c -fPIC
gcc *.o -o -shared -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
