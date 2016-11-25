#include <iostream>
#include <stdio.h>

int var = 3;
int* ptr = NULL;
int** pptr = NULL;

int main(void){
    printf("---\n");
    printf("%p\n", &var);
    printf("%p\n", &ptr);
    printf("%p\n", &pptr);
    printf("---\n");

    ptr = &var;
    printf("%p\n", ptr);
    printf("%p\n", pptr);
    return 0;
}