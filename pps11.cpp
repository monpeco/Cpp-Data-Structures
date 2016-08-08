#include <iostream>
using namespace std;

void sort(int a[], int l) {
  int index = 0;
  int n = 0;
  int temp = 0;

  for (int i = l-1; i > 0; i--) {
       index = i;

  //missing code
    for(int j = i - 1; j >= 0; j--) {if (a[j] < a[index]) { index = j; } }
    temp = a[i];
    a[i] = a[index];
    a[index] = temp;
  }
  for (int i = 0; i < l; i++) {
    cout << "a[index]: " << a[i] << endl;
  }  
}
int main()
{
    int a[4] = {2,3,4,5};
    int l = 4;
    sort(a, l);
    cout << "end" << endl;
}