#include <iostream>
#include <stdio.h>



void Swap(int& a, int& b) { // The & declares pass by reference
    int temp;
    temp = a; // No *'s required -- the compiler takes care of it
    a = b;
    b = temp;
}



int main(void){
    
    int x = 1;
    int y = 2;
    printf("x:[%d]\n", x);
    printf("y:[%d]\n", y);
    printf("Swap\n");
    Swap(x, y); // No &'s required -- the compiler takes care of it
    printf("x:[%d]\n", x);
    printf("y:[%d]\n", y);
    
    return 0;
}