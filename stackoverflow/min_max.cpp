#include <iostream>
#define INT_MAX 0   // Error 1: INT_MAX must be defined
#define INT_MIN 0   // Error 2: INT_MIN must be defined

using namespace std;
int main()
{
    int inNum, inInt, minInt, maxInt, i;

    minInt = INT_MAX;
    maxInt = INT_MIN;
    cout << "How many numbers would you like to enter?" << endl;
    cin >> inNum;
    cout << "Please enter " << inNum << " integers." << endl;
    for(i = 0 ; i < inNum; i++)
    {
            //Error 3: cin >> inInt >> endl; cin does not support endl
            cin >> inInt;
            if(inInt > maxInt)
            {
                    maxInt = inInt;
            }
            if(inInt < minInt)
            {
                    minInt = inInt;
            }
    }
    cout << "min: " << minInt << endl;
    cout << "max: " << maxInt << endl;
    return 0;
}