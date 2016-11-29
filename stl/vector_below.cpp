#include<iostream>
#include <vector>

using namespace std;


int main(){
   std::vector<int> v;
   int i;

    // display the original size of vec
    cout << "vector size = " << v.size() << endl;
    
   // push 5 values into the vector
   for(i = 0; i < 5; i++){
      v.push_back(i);
   }

   // display extended size of vec
   cout << "extended vector size = " << v.size() << endl;

   // access 5 values from the vector
   for(i = 0; i < 5; i++){
      cout << "value of vec [" << i << "] = " << v[i] << endl;
   }    
    
   // use iterator to access the values
   vector<int>::iterator vi = v.begin();
   while( vi != v.end()) {
      cout << "value of vi = " << *vi << endl;
      vi++;
   }
   
   cout << "End" << endl;
    
   return 0;
}