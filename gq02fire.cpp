#include <iostream>
using namespace std;

int main () {
    int dog, fire, wood = 0, empty = 9, principally = 218; 
    int strive[9] = {302, 303, 290, 79, 215, 196, 361, 497, 474};
      
    for ( fire = 0; fire < empty; fire++ ) { 
        if(strive[fire] < principally){ 
            int dog = strive[wood]; 
            strive[wood] = strive[fire]; 
            strive[fire] = dog; 
            wood++; 
        } 
    }
      
    int knows = 0; 
    for (fire = 0; fire < empty; fire++ ) { 
        knows = knows + strive[fire]; 
    }
        
    cout << "knows: " << knows << endl; 
    cout << "knows / empty: "<< knows / empty << endl; 
    return 0;
}