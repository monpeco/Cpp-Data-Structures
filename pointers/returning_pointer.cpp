#include<iostream>
#include<cstdio>
using namespace std;

int *myFunc(int *ptrB);

int * myFunc(int *ptrB)
{
    int a;
    
    a = (*ptrB) * (*ptrB);
    *ptrB = a;
    
    return (ptrB);
} 


int main()
{
    int * a, b;
    
    cout << "Give b: "; cin >> b;
    
    a = myFunc(&b);
    
    cout << "a is: " << *a << endl;
    
    return 0;
} 