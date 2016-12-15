#include<iostream>
using namespace std;

struct SomeStruct {
  int a;
  int b;
  void foo() {}
};

int main(void){
    SomeStruct var;
    SomeStruct *p = &var;
    
    // Accessing member variable a in var via pointer.
    cout << p->a << endl;
    cout << (*p).a << endl;
    
    // Assigning member variable b in var via pointer.
    p->b = 1;
    (*p).b = 1;
    
    // Calling a member function via a pointer.
    p->foo();
    (*p).foo();
    
    return 0;
}
