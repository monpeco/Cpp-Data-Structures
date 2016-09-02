#include <iostream>
using namespace std;

//Compare two intergers
bool pairEarlier(int a, int b) {
  int a1=a/10;
  int b1=a%10;
  int a2=b/10;
  int b2=b%10;
  if(a1*b1 < a2*b2) return true;    //rare form, but is just a comparation
  else  return false;
}
  
int findIndexOfPairFirst(int A[], int start, int end) {
  int i, currPairFirstIndex = start;
  for ( i = start ; i < end; i++ ) {
      if ( pairEarlier (A[i], A[currPairFirstIndex]) ) {
          currPairFirstIndex = i;
      }
  }
  return currPairFirstIndex;
} 

void swap(int A[],int index1,int index2) {
    int temp;
    temp = A[index2];
    A[index2] = A[index1];
    A[index1] = temp;
    return;
}

int main() {
  int A[6]={37,66,18,42,29,51} ;
  int currTop, currPairFirstIndex;
  for (currTop = 0; currTop < 6; currTop ++) {
      currPairFirstIndex = findIndexOfPairFirst(A, currTop, 6);
      swap(A, currTop, currPairFirstIndex);
  }
  int integer=A[2];
  int a=integer/10;
  int b=integer%10;
  int Output=a*b ;
  cout<<Output;
  return 0;
}
 