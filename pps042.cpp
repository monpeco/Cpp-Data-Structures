#include<iostream>
using namespace std;

int count = 0;

void myFunc1() {
  char c;
  cin >> c;
  if (c != 'X') { myFunc1();} 
  cout << c; 
  count++;
  return;
}

int main() {
    cout << "Give a sequence of characters: ";
    myFunc1();
    myFunc1();
    cout << "count: " << count << endl;
    
    return 0;
}