#!/bin/bash
gcc -Wall -Werror -pedantic -c *.C
ar rc liball.a *.0
