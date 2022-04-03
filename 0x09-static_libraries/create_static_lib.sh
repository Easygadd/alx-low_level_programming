#!/bin/bash
gcc -c _Wall _Werror -Wextra *.c
ar -rcs liball.a *.o
