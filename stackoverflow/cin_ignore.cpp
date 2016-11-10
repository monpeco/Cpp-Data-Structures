#include<iostream>
using namespace std;


int main() {
   int a = 0, b = 0, n,i;
   while (cin >> n) {// ingreso " 1 2 3 " y un caracter para cerrar el bucle
      a += n;
   }
   cin.clear();
   cin.ignore(256,'\n');
   while (cin >> i) {// ingreso " 4 5 6 " y un caracter para cerrar el bucle
      b += i;
   }
   cout << a <<' '<< b << endl;
}