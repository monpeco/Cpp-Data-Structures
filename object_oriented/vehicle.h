#include<iostream>
using namespace std;

class Engine                             // forward declaration of antoher class
{
public:
    Engine();                            // the constructor
    ~Engine();                           // the destructor

private:
    unsigned int type;             // another property
};




class Vehicle
{
public:
    Vehicle();                            // the constructor
    ~Vehicle();                           // the destructor

    unsigned int getWheelNumber();        // one method
    void setWheelNumber(unsigned int n);  // another method

    Engine m_engine;                      // a property
private:
    unsigned int m_wheel_num;             // another property
};

