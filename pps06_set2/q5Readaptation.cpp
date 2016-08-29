#include <iostream>
using namespace std;

void recAdaptedSelectionSort(int A[],  int n) {
   if (n == 1) 
      return; // one element in array
   else {
      int j = 0;
      for (; j<n-1; j++)  {
         if (A[n-1]<A[j]) {  // swap A[n-1] and A[j]
            int temp = A[n-1];
            A[n-1] = A[j];
            A[j] = temp;
         }
      }
      recAdaptedSelectionSort(A, n-1);
      return;
   }
}

int main () {
   int A[]={2,6,4,9,10,3};
   int n=6;

   for (int index=0; index<n; index++){
       cout << " A[" << index << "]: " << A[index]<< endl ;
   }
   
   recAdaptedSelectionSort(A, n);
   cout << "recAdaptedSelectionSort" << endl;
   
   for (int index=0; index<n; index++){
       cout << " A[" << index << "]: " << A[index]<< endl ;
   }   
   return 0;
}