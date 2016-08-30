#include<iostream>
using namespace std;


int generate (int n) {
    if (n != 0)
        n = n + generate(n-1);
    return n;
}
   
int main() {
    int n = 6;
    cout << generate(n);
    return 0;
}
