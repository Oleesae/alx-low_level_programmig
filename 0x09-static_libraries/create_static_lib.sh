#!/bin/bash
gcc -c *.c | ar rcs lib*.a *.o
