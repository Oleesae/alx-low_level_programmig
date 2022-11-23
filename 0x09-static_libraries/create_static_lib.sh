#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c 
ar rc lib*.a *.o
ranlib lib*.a
