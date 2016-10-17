#include<iostream>
#include<cstdio>
using namespace std;

int main()
{ 
    int m, n;
    int * ptrInt;
    int ** ptrPtrInt;
    
    ptrPtrInt = &ptrInt;
    
    cout << "Give m and n: "; cin >> m >> n;
    ptrInt = &n; cout << *(*ptrPtrInt) << endl;
    ptrInt = &m; cout << *(*ptrPtrInt) << endl;
    return 0;
}
