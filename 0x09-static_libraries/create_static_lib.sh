#!/bin/bash
gcc -Wall -Wetra -Werror -pendatic .c *.c
ar rc liball.a *.o
