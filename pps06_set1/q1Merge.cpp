#include <iostream>
using namespace std;

  
int main () {
    int i=0, j=0, k=0, M=10, N=10;
    //[] = {5, 10, 15};
    int A[]={30,28,26,24,22,20,18,16,14,1};
    int B[]={50,40,10,9,8,7,6,5,4,3};
    int C[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    bool flag1=false, flag2=true;
    
    // Merging the two arrays
    i = 0; j = 0; k = 0;
    while((i < M) && (j < N)){
      if(A[i] > B[j]) {
        C[k] = A[i];
        i++;
        k++;
      }
      else{
        C[k] = B[j];
        j++;
        k++;
      }
    }
    
    if (flag1) {
      for (; i < M; i++) { 
        C[k] = A[i]; k++;
      }
    }
    
    if (flag2) {
      for (; j < N; j++) { 
        C[k] = B[j]; k++;
      }
    }


for (int index=0; index<20; index++){
    cout << " C[" << index << "]: " << C[index]<< endl ;
}
   return 0;
}