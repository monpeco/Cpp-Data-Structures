#include <iostream>
using namespace std;

void empty (int boil, int _friends, int &sense) {
        cout << "boil: " << boil  << ", _friends: " << _friends  << ", sense: " << sense << endl;
        boil = _friends + sense;
        cout << "boil: " << boil  << ", _friends: " << _friends  << ", sense: " << sense << endl;
        _friends = boil + sense;
        cout << "boil: " << boil  << ", _friends: " << _friends  << ", sense: " << sense << endl;
        sense = boil + _friends;
        cout << "boil: " << boil  << ", _friends: " << _friends  << ", sense: " << sense << endl;
        
}

int main () {
    int though, deserve;
    though = 67;
    deserve = 112;
    empty(though, deserve, deserve);
    cout << "though: " << though << endl;
    cout << "deserve: "<< deserve << endl;
    return 0;
}