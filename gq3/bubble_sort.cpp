#include <iostream>
using namespace std;

void bubbleSort (int A[], int n) {
  for (int i=0; i<n-1; i++) {
    for (int j=n-1; j>i; j--) {
      if (A[j] < A[j-1]) {
        int temp=A[j];
        A[j]=A[j-1];
        A[j-1]=temp;
      }
    } 
  }
}

int myFunction(int arr[], int n, int x, int low, int high){
  int var=-1;
  int mid;
  while (low <= high){
    mid=(low+high)/2;
    if (arr[mid]==x){
      var=mid;
      low=mid+1;
    }
    else if (arr[mid]>x)
      high=mid-1;
    else
      low=mid+1;
  }
  return var;
}

int main(){
  int arr[]={9,5,3,1,7,5,8,4,8,3,9};
  int n=11; //size of array
  bubbleSort(arr,n);
  int output=myFunction(arr,n,9,0,n-1);
  cout<<output;
  return 0;
}
  