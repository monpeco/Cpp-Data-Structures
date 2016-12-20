#include <iostream>
using namespace std;

class A {
public:
    int move(){ cout << "move()\n"; };
    void turn(){ cout << "turn()\n"; };
};

class B : private A {
public:
    using A::turn; 
};

int main(){
    B b;
    //b.move();  // compile error
    b.turn();  // Ok because we make turn public
}