#include <iostream>
using namespace std;

int main(){
    int A = 4;
    while(A > 0){
        switch(A--){
            case 1: cout<<"1";
            break;
            case 2: cout<<"2";		
            case 3: cout<<"3";
            case 4: cout<<"4";
            break;
        }
    }
}
