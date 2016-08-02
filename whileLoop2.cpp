#include <iostream>
using namespace std;
int main() {
   int FACT = 1;
   cout << "FACT" << FACT << endl;
   
   for(unsigned int i = 6; i >= 0; --i) {
   cout << i << endl;
       
      FACT *= i;
   }
   cout << "FACT" << FACT << endl;
   return 0;
}