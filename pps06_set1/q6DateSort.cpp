#include <iostream>
using namespace std;

  

bool compare(int date1, int date2) { return ((date1 % 10000) >= (date2 % 10000)); }

void sortBirthDays(int birthDays[], int n)
{
  int someBirthDay;
  int index;

  do {
    index = n-1;
    for (int i = 0; i < n-1; i++) {
      if (compare(birthDays[i], birthDays[index])) {
         index = i;
      }
    }
    if (index < n-1) {
      someBirthDay = birthDays[index];
      birthDays[index] = birthDays[n-1];
      birthDays[n-1] = someBirthDay;
    }
    n--;
  } while (n > 1);
}


int main () {
    int birthDays[] = {19710206, 20000201, 19840107};
    int n = 3;

for (int index=0; index<n; index++)
    cout << " birthDays[" << index << "]: " << birthDays[index]<< endl ;
    
    sortBirthDays(birthDays, n);
    cout << "sortBirthDays" << endl;
    
for (int index=0; index<n; index++)
    cout << " birthDays[" << index << "]: " << birthDays[index]<< endl ;
    
    
   return 0;
}
