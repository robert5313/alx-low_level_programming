#!/bin/bash
gcc -wall -wextra -werror
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
