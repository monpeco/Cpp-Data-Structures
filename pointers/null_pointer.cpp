#include <iostream>

using namespace std;

int main () {
    int  *ptr = NULL;
    
    cout << "The value of ptr is " << ptr << endl;
    
    if(!ptr)    // succeeds if p is null
        cout << "The pointer is null " << endl;
    
    return 0;
}