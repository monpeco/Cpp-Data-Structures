#include<iostream>
#include "vehicle.h"
using namespace std;


Engine::Engine()
{
    cout << "Engine.constructor" << endl;
}

Engine::~Engine()
{
    cout << "Engine.destructor" << endl;
} 



Vehicle::Vehicle() :
    m_wheel_num(10), // initializer list
    m_engine()
{
    cout << "Vehicle.constructor" << endl;
}

Vehicle::~Vehicle()
{
    cout << "Vehicle.destructor" << endl;
} 

unsigned int Vehicle::getWheelNumber()
{
    return m_wheel_num;
}

void Vehicle::setWheelNumber(unsigned int wheelsNumber)
{
    m_wheel_num = wheelsNumber;
}

int main(){

    cout << "Creation v1 (on the Stack)" << endl;
    Vehicle v1 ;    //Constructor's call v2

    cout << "Creation v2 (on the Heap)" << endl;
    Vehicle* v2 = new Vehicle;  //Constructor's call v2
    delete v2;                  //Destructor's call v2

    cout << "End" << endl;

    return 0;
    //varaible scope's end, call the destructor
}