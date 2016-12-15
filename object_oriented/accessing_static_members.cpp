#include<iostream>
using namespace std;

struct SomeStruct {
  int a;
  int b;
  void foo() {}

  static int c;
  static void bar() { cout << "This is bar()" << endl; }
};

int SomeStruct::c;

int main(){
    

    SomeStruct var;
    SomeStruct* p = &var;

    // Assigning static member variable c in struct SomeStruct.
    SomeStruct::c = 5;
    cout << "SomeStruct::c: " << SomeStruct::c << endl;
    
    // Accessing static member variable c in struct SomeStruct, through var and p.
    var.a = var.c;
    var.b = p->c;

    //Changing static member with through p
    p->c = 9;
    cout << "SomeStruct::c: " << SomeStruct::c << endl;

    // Calling a static member function.
    SomeStruct::bar();
    var.bar();
    p->bar();

    return 0;
}
