#!/bin/bash
gcc -Wall -pendantic -Werror -o *.c
ar -rc liball.a *.o
ranlib liball.a
