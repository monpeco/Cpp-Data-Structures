#include <iostream>
using namespace std;

struct A
{
    int member;
    A(int param){
        member = param;
        cout << "constructor: [" << member << "]\n";
    }
    void foo() { cout << "foo: [" << member << "]\n"; }
};

struct B: virtual A
{
    B(): A(5){}
};

struct C: virtual A
{
    C(): A(88) {}
};



int main()
{
    B first;    //constructor: [5]
    C second;   //constructor: [88]

    return 0;
}