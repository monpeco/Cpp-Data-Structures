#include<iostream>
using namespace std;


// Jack's Function
int jack(int n, int i) {
    if(i <= 9)  
        n = n*i + jack(n, i+1);
    else 
        return n*i; 
}
   
// Jill's Function
int jill(int n, int i) {
    if(i != 0) 
        n = jill(n, i-1) + n*i; 
    else 
        return n*i;
}

// myFunc
int myFunc(int n) {
    long long int acc = 0, temp = 0;
    for(int i=1;i<=10;i++){
        temp = n*i;
        acc = acc + temp;
    }
    return acc;
}

    //main program, which calls the functions written by them
int main() {
   int n;
   cout << "Enter a number " << endl;
   cin >> n;
   cout << jack(n,1) << endl;
   cout << jill(n,10) << endl;
   cout << myFunc(n) << endl;
   
   
   return 0;
}