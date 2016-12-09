#include <iostream>
 
using namespace std;
const int MAX = 4;
 
int main () {
   char *names[MAX] = {
      "Zara Ali",
      "Hina Ali",
      "Nuha Ali",
      "Sara Ali",
   };
   char names2[MAX][10] = {
      "Zara Ali2",
      "Hina Ali2",
      "Nuha Ali2",
      "Sara Ali2",
   };

   for (int i = 0; i < MAX; i++) {
      cout << "Value of names[" << i << "] = ";
      cout << names[i] << endl;
   }
   
   for (int i = 0; i < MAX; i++) {
      cout << "Value of names[" << i << "] = ";
      cout << names2[i] << endl;
   }   
	
   return 0;
}