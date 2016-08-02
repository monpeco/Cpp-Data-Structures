#include<iostream>
using namespace std;
int main() {
    int c, a, e, d, g;
    cout << "Enter two numbers:";
    cin >> c >> a;
    e = c;
    d = a;
 
     while(c != a){ //1
        if(c > a) 
            c = c - a;  //2
        else 
            a = a - c; 
    }
    g = e * d / c; //3
    
    
    cout << g << endl;

    return 0;
}