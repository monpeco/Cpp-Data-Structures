#include<iostream>
using namespace std;

int main(){
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for( int i=0; i < 10; i++) { 
      /*cout << "---------------------------------------" << endl;  
      cout << "i:                           " << i << endl;  
      cout << "a[i]:                        " << a[i] << endl;  
      cout << "a[i] % a[1]:                 " << a[i] % a[1] << endl;  
      cout << "a[i] % a[1] || a[i] % a[i]:  " << (a[i] % a[1] || a[i] % a[i]) << endl;  */
      if (a[i] % a[1] || a[i] % a[i])   
        cout << "cout:" << a[i] << endl;
    }
}
