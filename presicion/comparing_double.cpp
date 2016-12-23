#include <iostream>
#include <stdio.h>
#include <cmath>


bool isEqual(double d1, double d2, double epsilon = 0.000000001)
{
    return fabs(d1 - d2) < epsilon;
}

int main()
{
    double primero=.33333 ;
    double segundo=1.0/3.0 ;

    printf ("primero: %.20f\n", primero);
    printf ("segundo: %.20f\n", segundo);

    std::cout << "isEqual: " << (isEqual(primero, segundo)) << "\n";
    std::cout << "isEqual: " << (isEqual(primero, segundo, 0.0001)) << "\n";
    
 }