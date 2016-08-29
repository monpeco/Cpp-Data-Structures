#include <iostream>
using namespace std;


bool mySearch(int A[], int start, int end, int el)
{
  // Search A[start] through A[end-1] for el

  int mid = (start + end)/2;  

  if (el < A[mid]) {return mySearch(A, start, mid, el);}
  else if (el > A[mid]) {return mySearch(A, mid+1, end, el);}
  else {// A[mid] == el
   return true;
  }

  return false;
} 
  
int main () {
    int start=0, end=6, el=5;
    int A[] = {2,3,4,7,8,10};
    bool result = false;
    result = mySearch( A, start, end, el);
    cout << "result:" << result << endl ;
    return 0;
}

