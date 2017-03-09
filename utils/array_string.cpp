#include <iostream>
#include <string>

using namespace std;
const int NUM = 3;

void hola(string *mana)
{

    *(mana+0) = "Hola soy sergio";
    *(mana+1) = "Mamam me quierre";
    *(mana+2) = "Hola como estas";
}


int main()
{

    string mana[NUM];

    hola(mana);
    string *p = mana;


    for (int i = 0; i < NUM; i++)
    {
        cout << *p++ << endl; 
    }

    return 0;
}