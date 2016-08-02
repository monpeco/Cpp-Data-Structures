#include <iostream>
 

using namespace std;

int main(){

    int a = 0, b = 1, c = 0, val1, val2, val3;
    cout <<  "a: " << a << "b: " << b << "c: " << c << endl;
    cout <<  "val1: " << val1 << "val2: " << val2 << "val3: " << val3 << endl;
    val1 = !(a || b || c);
    cout <<  "val1: " << val1 << endl;
    
    val2 = a || b && c ;
    cout <<  "val2: " << val2 << endl;
    
    val3 = !(a && b || c) ;
    cout <<  "val3: " << val3 << endl;
    
    cout << val1 << val2 << val3;



	return 0;
}
