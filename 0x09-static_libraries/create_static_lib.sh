#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-unused-parameter -c *.c
ar -rcs liball.a *.o
