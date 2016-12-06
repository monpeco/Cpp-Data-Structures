//archivo.cpp
#include <stdio.h>

extern  "C" void f(int);

void f(int i){

    printf("f in C++!!!\n");
}