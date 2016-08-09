#include <iostream>
using namespace std;

void sigma(int n){
    int k = 0, j = 0;

    if (n == 0) 
        return;

    k = n % 6; 
    j = n / 10;
    sigma(j);
  
    cout << k;
}
 
int main() {
    int a = 1997;
    sigma(a);   
}