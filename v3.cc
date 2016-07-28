#include <iostream>
#include <math.h>       /* sqrt */

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
        cout << “x: “ << x << “ y: “ << y << “ z: “ << z << endl;
        return;
    }

};




int main() {
    V3 va, vb, vc, *ptrP;
    va.x=1.0;   va.y=1.5;   va.z=2.0;
    vb.x=4.0;   vb.y=3.5;   vb.z=2.8;
    
    vc = va.sum(vb);
    ptrP = &vc;
    
    std::cout << "Vector´s Funtions" << std::endl;
    std::cout << "va.x=" << va.x << std::endl;
    std::cout << "va.y=" << va.y << std::endl;
    std::cout << "va.z=" << va.z << std::endl;
    std::cout << "length va = " << va.length() << std::endl;
    
    std::cout << "vb.x=" << vb.x << std::endl;
    std::cout << "vb.y=" << vb.y << std::endl;
    std::cout << "vb.z=" << vb.z << std::endl;
    std::cout << "length vb = " << vb.length() << std::endl;
    
    std::cout << "vc.x=" << vc.x << std::endl;
    std::cout << "vc.y=" << vc.y << std::endl;
    std::cout << "vc.z=" << vc.z << std::endl;
    std::cout << "length vc = " << vc.length() << std::endl;
    std::cout << "length vc = " << vc.scale(8.0).length() << std::endl;
    std::cout << "length ptrP = " << (ptrP->scale(8.0)).length() << std::endl;

    exit(0);
}
