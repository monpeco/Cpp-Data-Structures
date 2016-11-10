#include <iostream>
using namespace std;

int n=3;
float v[]={3,1,3,1,3,3,1,1,3,3};

bool mayoritario(float v[],int n);

bool mayoritario(float v[],int n){ //Linea 15
    int i,j,nveces,nvmaximo=0;
    for(int i=0 ;i<=n/2 ;i++){
        nveces=1;
        for(int j=i+1 ;j<n ;j++){
            if(v[i]==v[j]){
                nveces++;
            }
            if(nveces>nvmaximo){
                nvmaximo=nveces;
            }
        }
    }
     return (nvmaximo>n/2);
}


int main()
{
    mayoritario(v,n);
    cout<<mayoritario(v,n);
    return 0;
}
