#include <iostream>
using namespace std;
int main()
{
    int A[100], N, i, k, Somenum, count;
    for (i = 0; i < 100; i++){
       A[i] = 100 - i;
    }
    cin >> N;
    k = (N * N) % 100;
    Somenum = A[k];
    count = 0;
    for (i =0; i < 100; i++){
       if (A[i] > Somenum) count++;
    }
    cout << "cout1: " << count << endl;
    cout << "cout2: " << N*N%100 +1 << endl;
    
    
    
    return 0;
}