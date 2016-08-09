#include <iostream>
using namespace std;

int magic (int w) {
    cout << " ttt : " <<  endl ;
   	if (w == 0)                       
              return 1;                      
   	if (w == 1)                       
              return 2;                      
                                             
   	return ( magic (w - 1) * magic (w - 2) );
}
  
int main () {
   int value = magic (6);
   cout << " Result : " << value << endl ;
   return 0;
}