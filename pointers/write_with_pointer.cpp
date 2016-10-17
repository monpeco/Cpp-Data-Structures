#include<iostream>
#include<cstdio>
using namespace std;


int main()
{ 
    int m, n, sum = 0;
    int * ptrInt;
    int * ptrSum;
    
    ptrSum = &sum;
    
    cout << "Give m and n: "; cin >> m >> n;
    
    ptrInt = &n; *ptrSum += *ptrInt;
    ptrInt = &m; *ptrSum += *ptrInt;
    
    cout << "Sum: " << sum << endl;
    
    return 0;
}