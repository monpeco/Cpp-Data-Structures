#include <iostream>
#include <math.h>       /* sqrt */

using namespace std;

//Struct definition
struct V3 {
    double x, y, z;
    
    //Methods definitions
    double length() { return ( sqrt( (x*x) + (y*y) + (z*z) ) ); }
    
    V3 sum (V3 const &b) {
        V3 v;
        v.x = x + b.x;
        v.y = y + b.y;
        v.z = z + b.z;
        return v;
    }
    
    V3 scale(double const factor){
        V3 v;
        v.x=x*factor;
        v.y=y*factor;
        v.z=z*factor;
        return v;
    }
    
    void print() {
        cout << "x: " << x << " y: " << y << " z: " << z << endl;
        return;
    }

};




int main() {
    
    
    V3 vel, acc, pos;
    V3 currDispl, currPos;
    double t = 0.0, deltaT, totalT;
    
    cout << "Give x, y and z components of initial velocity: ";
    cin >> vel.x >> vel.y >> vel.z;
    cout << "Give x, y and z components of acceleration: ";
    cin >> acc.x >> acc.y >> acc.z;
    cout << "Give x, y and z components of initial position: ";
    cin >> pos.x >> pos.y >> pos.z;
    cout << "Give total simulation time: "; cin >> totalT;
    cout << "Given simulation time granularity: "; cin >> deltaT;
    
    if ((totalT < 0) || (deltaT <= 0)) {
        cout << "Invalid input!" << endl; return -1;
    }
    
    while (t <= totalT) {
        // Calculate current displacement using vel*t + (0.5)*acc*t2
        currDispl = (vel.scale(t)).sum(acc.scale(0.5*t*t));
        currPos = currDispl.sum(pos);
        cout << "Time " << t << " "; currPos.print(); t = t + deltaT;
    }   
        
    exit(0);
}
