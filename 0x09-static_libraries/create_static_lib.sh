#!/bin/bash
gcc -Wall -pedantic -Werror -o *.c
ar -rc liball.a *.o
ranlib liball.a
