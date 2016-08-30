#include<iostream>
using namespace std;


void t ( int n, char fp, char tp, char ap ) {
   if ( n ==1) {
      cout << fp << tp;
      return;
   }
   t (n -1, fp, ap, tp);
   cout << fp << tp;
   t (n -1, ap, tp, fp);
   return;
}
int main () {
   t (2, 'x', 'y', 'z');
   return 0;
}