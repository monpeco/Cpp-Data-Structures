#include <iostream>
#include <stdio.h>



int main(void){

    const char *c = "hello";
    const char **cp = &c;


    printf("c:[%p]\n", c);
    //printf("*c:[%d]\n", *c);
    
    printf("cp:[%p]\n", cp);
    
    return 0;
}