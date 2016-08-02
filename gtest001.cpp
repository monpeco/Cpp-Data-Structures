#include<iostream>
using namespace std;
/*   i.  Use locations A, B;
  ii.  Output "Give A and B: ";
 iii.  A = 62; 
  iv.  B = 149;
   v.  B = A + B;
  vi.  A = A + B;
 vii.  Output A;
viii.  Output B;*/
int main() {
    int A,B;

    A = 62;
    B = 149;
    B = A + B;
    A = A + B;
    cout << "A:" << A << endl; 
    cout << "B:" << B << endl; 

    return 0;
}