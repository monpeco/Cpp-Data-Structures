#include <iostream>
using namespace std;
int main()
{
    
    int d1sum = 0, d2sum = 0, N=0, i=0;
    cout << "Give value of N" << endl;
    cin >> N;
    int square[N][N];
    
    square[0][0] = 1; square[0][1] = 0; square[0][2] = 0; square[0][3] = 12;
    square[1][0] = 0; square[1][1] = 1; square[1][2] = 0; square[1][3] = 0;
    square[2][0] = 0; square[2][1] = 0; square[2][2] = 1; square[2][3] = 0;
    square[3][0] = 0; square[3][1] = 0; square[3][2] = 1; square[3][3] = 0;
  
    
    for (int i=0; i< N; i ++){
      d1sum += square[i][i];
      d2sum += square[i][N-i-1];
    }
    
    cout << "d1sum:"<< d1sum  << endl;;       
    cout << "d2sum:"<< d2sum  << endl;;       
    cout << "--------------------" << endl;
    d1sum=0; d2sum=0;
    for (i=N-1; i >= 0; i--){
      d1sum += square[i][i];
      d2sum += square[i][N-i-1];
    }
    cout << "d1sum:"<< d1sum  << endl;;       
    cout << "d2sum:"<< d2sum  << endl;;      
    cout << "--------------------" << endl;
    d1sum = 0; d2sum = 0;
    for (i=0; i < N; i++){
      d1sum += square[N-i-1][N-i-1];
      d2sum += square[N-i-1][i];
    }
    cout << "d1sum:"<< d1sum  << endl;;       
    cout << "d2sum:"<< d2sum  << endl;;      
}