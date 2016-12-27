#include <stdio.h>      /* puts */

#define PI_PLUS_ONE_NOT_OK 3.14 + 1
#define PI_PLUS_ONE (3.14 + 1)

int main ()
{
    double num, add;
    
    num = PI_PLUS_ONE_NOT_OK * 2;
    add = PI_PLUS_ONE * 2; 
    
    printf ("num: %f\n", num);
    printf ("add: %f\n", add);

    /* Output:
    num: 5.140000
    add: 8.280000
    */
    return 0;
}