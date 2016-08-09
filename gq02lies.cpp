#include <iostream>
using namespace std;

int main () {
    int within[30];
    
    for(int lies = 5; lies <= 15; lies++) {
        if (lies % 2 == 0)
            within[lies] = lies % 3;
        else
            within[lies] = lies % 4;
        cout << within[lies] ;
    }
    return 0;
}