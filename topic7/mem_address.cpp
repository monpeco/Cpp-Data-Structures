#include <iostream>
using namespace std;

int main()
{
    int a; float b; char c;
    int * ptrA; float * ptrB; char * ptrC;
    
    ptrA = &a; cout << "Address of a is: " << ptrA;
    ptrB = &b; cout << "Address of b is: " << ptrB;
    ptrC = &c; cout << "Address of c is: " << ptrC;
    
    return 0;
}