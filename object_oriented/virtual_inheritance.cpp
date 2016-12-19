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

struct B: virtual public A
{
    B(): A(5){}
};

struct C: virtual public A
{
    C(): A(88) {}
};

struct D : public B, public C
{
    D(): A(200) {}
    void bar()
    {
        foo(); //Without virtual inheritance this would be an Error, which foo? B::foo() or C::foo()? - Ambiguous
    }
};

int main()
{
    B first;    //constructor: [5]
    C second;   //constructor: [88]
    D third;    //constructor: [200]
    
    return 0;
}