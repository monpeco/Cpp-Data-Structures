
#include <iostream>
using namespace std;

int f(int n){
    int r = 0;
    if(n <= 0) return 1;
    else if(n > 3){
        r = n;
        return f(n-2) + 2;
    }
    return f(n-1) + r;
}


int main()
{

    cout << "cout1: "<< f(5)  << endl;

    
    
    return 0;
}