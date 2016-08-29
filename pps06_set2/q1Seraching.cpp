#include <iostream>
using namespace std;

  
int main () {
    bool found = false;
    int M=4, N=3, first=0, last=0, mid=0;
    int A[] = {10,6,3,2};

    //cout << "Enter total number of elements for the array:";
    //cin >> M;
    
    //cout << "Enter the elements of the array:";
    //for (int i=0; i<M; i++) 
    //   cin >> A[i];
    
    //cout << "Enter the element to be searched from the array:";
    //cin >> N;
    
    found = false; 
    first = mid = 0; 
    last = M-1;
    
    while ((last >= first) && !found){
       mid = (last+first)/2;
       if (N == A[mid]) {
          found = true;
          cout << " found" << endl ;

          break;
       }
       else if(N > A[mid]) {
          last = mid-1;
       }
       else first = mid +1;
    }

   return 0;
}