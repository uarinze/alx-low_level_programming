#!/bin/bash
gcc -c -fPIC *.c; gcc -shared -o liball.so *.o; nm -D --defined-only liball.so; export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
