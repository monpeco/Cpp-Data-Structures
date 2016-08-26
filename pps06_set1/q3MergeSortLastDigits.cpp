#include <iostream>
using namespace std;

void mergeSort(int *A, int start, int end);
void mergeSortedSubarrays(int A[], int start, int mid, int end);

void mergeSort(int A[], int start, int end)
{
  int mid;

  if (end == start + 1) { return; }
  else { 
    mid = (start + end)/2;
    mergeSort(A, start, mid);
    mergeSort(A, mid, end);
    mergeSortedSubarrays(A, start, mid, end);
    return;
  }
}

void mergeSortedSubarrays(int A[], int start, int mid, int end)
{
  int i, j, index = start;
  int B[100];

  for (i = start, j = mid; ((i < mid) || (j < end)); ) {
      if ((i < mid) && (j < end)) {
        if ((A[j] % 100) <= (A[i] % 100)) { B[index++] = A[j++]; }
        else {B[index++] = A[i++];}
      }
      else if (i < mid) {B[index++] = A[i++]; }
      else {B[index++] = A[j++];}
  }

  for (i = start; i < end; i++) { A[i] = B[i]; }
  return;
}





int main () {
  int A[]={201, 101, 300, 400};
  int start=0, end=4;

  for(int index=0; index<4; index++){
    cout << " A[" << index << "]: " << A[index]<< endl ;
  } 
  
  cout << " mergeSort " << endl ;
  mergeSort(A, start, end);
  
    for(int index=0; index<4; index++){
    cout << " A[" << index << "]: " << A[index]<< endl ;
  }  
  return 0;
}