#include<iostream>
using namespace std;

int main () {
    int a = 4; 
    int num1, num2;
    num1 = 448;
    num2 = 36; 
    
    for ( ; ; ) {
       a = a * 3;
       if(a > num1) {
          a = a - 5; 
          break;
        }
    }

    while(true) {
        a = a / 3; 
        if(a < num2) { 
            a = a - 5; 
            break;
        }
    }
    cout << a;
    return 0;
} 