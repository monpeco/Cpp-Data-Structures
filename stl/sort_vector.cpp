 /* Vector sort example */
 #include <iostream>
 #include <vector>
 #include <algorithm>    // std::sort
 
 int main()
 {
         using namespace std;
  
         cout << "Sorting STL vector, \"the easier array\"... " << endl;
         cout << "Enter numbers, one per line.  Press ctrl-D to quit." << endl;
 
         vector<int> vec; 
         int tmp;
         while (cin>>tmp) {
                 vec.push_back(tmp);
         }
 
         cout << "Sorted: " << endl;
         sort(vec.begin(), vec.end());   
         int i = 0;
         for (i=0; i<vec.size(); i++) {
                 cout << vec[i] << endl;;
         }
 
         return 0;
 }