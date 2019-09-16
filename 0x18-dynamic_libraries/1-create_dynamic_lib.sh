#!/bin/bash
gcc -Wall -Werror *.c -fPIC -c
gcc -Wall -Werror *.o -shared -o liball.so
