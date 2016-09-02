#include <iostream>
using namespace std;
void inssort(int d[],int n){
   int temp,i,j;
   for(j = 1; j < n; j++){
        temp = d[j];
        i=j-1;
        while(i >= 0 && d[i] > temp){
             d[i+1] = d[i];
             i--;
        }
        d[i+1] = temp;
        if (j == 4){
            cout << "A[3]: " << d[3] << endl;
            cout << "j: " << j << endl;
        }
            
       }
}
int main(){
   int A[9] = {40, 65, 25, 63, 1, 30, 33, 14, 74};
   inssort(A,9);
   return 0;
}