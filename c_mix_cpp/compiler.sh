#!/bin/sh

c_file=$1
cpp_file=$2
echo "Compile start"

gcc -c -o $c_file.o $c_file.c
g++ -c -o $cpp_file.o $cpp_file.cpp   
g++ -o program $c_file.o $cpp_file.o  


echo "Compile end"
