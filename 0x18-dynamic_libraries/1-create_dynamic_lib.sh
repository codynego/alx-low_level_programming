#!/bin/bash
gcc -FPIC -c *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=$PWD/liball.so:
