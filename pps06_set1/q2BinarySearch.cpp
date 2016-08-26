#include <iostream>
using namespace std;

// PRECONDITION: A[start] … A[end – 1] sorted in increasing order
int binarySearch(int A[], int start, int end, int srchElement) {
  if (end == start + 1) { // Array A has exactly 1 element
    if (A[start] == srchElement) {
      return start;
    }
    else { return -1; }
  }
  int mid = (start + end)/2;
  if (A[mid] == srchElement) {
    return mid;
  }
  else {
    if (A[mid] < srchElement) {
      return binarySearch(A, mid, end, srchElement);
    }
    else {
      return binarySearch(A, start, mid, srchElement);
    }
  }
}
// POSTCONDITION: If srchElement in A[start] … A[end-1], return its index, else -1


int main () {
    int A[] = {15, 22, 11, 13, 12, 18, 16, 6, 14, 5};
    int start = 0, end = 10;
    int srchElement[] = {15, 22, 11, 13, 12, 18, 16, 6, 14, 5};
    int response = 0;
    
    for (int index=0; index<10; index++){
        response = binarySearch(A, start, end, srchElement[index]);
        if (response != -1){
            cout << "srchElement:[" << srchElement[index] << "]: " << " response:[" << response << "]: " << endl ;
        }
    }

    return 0;
}