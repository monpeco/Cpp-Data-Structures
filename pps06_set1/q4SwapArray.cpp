#include <iostream>
using namespace std;

  
int main () {
    int i=0, j=0, min=0, n=10, temp=0, swap=0;
    int A[]={9,1,8,2,7,3,6,4,5,0};
        
    for (int index=0; index<10; index++){
        cout << " A[" << index << "]: " << A[index]<< endl ;
    }        
    for (i = 0; i < n-1 ; i++) {
      min = i;
      for (j = i + 1; j < n; j++){
        if (A[j] < A[min]){
          min = j;
        }
      }
      //swapping A[i] and A[min]
      temp = A[i];
      A[i] = A[min];
      A[min] = temp;
      swap++;
      if (swap==4) break;
    }
    cout << " Order "<< endl ;

    for (int index=0; index<10; index++){
        cout << " A[" << index << "]: " << A[index]<< endl ;
    }   
   return 0;
}