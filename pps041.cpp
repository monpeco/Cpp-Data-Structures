#include<iostream>
using namespace std;

int myFunc2(int n) {
   n /= 2;
   n /= 2;

   if (n <= 8) {   
      myFunc2(n/2);
   }     
   return n%2;
}


int main() { 
    int myVar = 137;
    
    cout << "myFunc2(int n): " << myFunc2(myVar) << endl;
    return 0;
}