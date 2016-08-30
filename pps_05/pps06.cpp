#include<iostream>
using namespace std;

int main(){
    int i;
    long long int a[50], b[50];
    a[0] = 1;
    b[0] = 1;
    for (i=1; i<50; i = i + 1) {
       a[i] = b[i-1];
       b[i] = a[i-1] + b[i-1];

    }    
    for (i=1; i<50; i = i + 1) {
       cout << "a[" << i<< "]: " << a[i] << endl;
    }  
    
    for (i=1; i<50; i = i + 1) {
       cout << "b[" << i<< "]: " << b[i] << endl;
    }
}