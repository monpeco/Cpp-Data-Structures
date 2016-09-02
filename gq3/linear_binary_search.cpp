#include<iostream>
using namespace std;

int linearSearch(int m[], int b, int a){
    int f;
    for (f = 0; f < b; f++){
        if(m[f] == a) { return f + 1; }
    }
    return -1;
}
  
int binarySearch(int d[], int q, int o, int k) {
    if (o == q + 1) {
        if(d[q] == k) { return q; }
        else { return -1; }
    }
    int j = (q + o)/2;
    if (d[j] == k) { return j; }
    else {
        if (d[j] < k) {
            return binarySearch(d, j, o, k);
        }
        else {
            return binarySearch(d, q, j, k);
        }
    }
}

int main() {
    int m = 13;
    int b[13] = {1, 6, 7, 9, 11, 33, 40, 50, 68, 84, 91, 94, 98};
    int f[13] = {42, 13, 31, 62, 16, 69, 5, 17, 81, 40, 41, 59, 47};
    int t = 33;
    int p = binarySearch(b,0,m,t);
    //int n = ??; // needed for second part
    for(int index=0; index < 100; index++){
        int n = index; // needed for second part
        int k = linearSearch(f,m,n);
        if(k == 4){
            cout << "n:" << n ;        
            cout << ", k:" << k << endl;
        }
    }

    return 0;
}