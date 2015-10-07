#!/bin/sh
# first clear the console
# we pass through $1 the file number
clear
printf '==== Clearing console...\n'
printf '==== Compile program\n'
gcc -g -Wall $1.c -o $1
printf '==== Run program\n'
./$1
