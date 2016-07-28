#include <iostream>     /* cout */
#include <stdlib.h>     /* malloc, free, rand */

using namespace std;

struct A{
  int x;
  int y;
  int z;
};

struct A* D(int x, int y, int z){
  //Expr1 
  struct A* C = (struct A*) malloc(sizeof(struct A));   //1 
  //struct A* C;  //2 
  // struct A* C;  //3
  
  
  (*C).x=x*y;
  (*C).y=y*z;
  (*C).z=x*z;
  return C;
}

int main(){
  int a=2, b=3, c=4;
  //Expr2 
  struct A* E; //1 
  //struct A* E = (struct A*) malloc(sizeof(struct A));//2 
  //struct A* E; //3
  
  E = D(a, b, c);
    cout << (*E).x  << endl;
    cout << (*E).y  << endl;
    cout << (*E).z  << endl;
}

