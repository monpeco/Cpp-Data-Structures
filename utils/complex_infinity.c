#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>
int main()
{
   complex double aaa = INFINITY + 0*I;
   printf("%.f + %.f*I\n", creal(aaa), cimag(aaa));
   complex double bbb = 1.0/aaa;
   #ifndef __STDC_IEC_559_COMPLEX__
   if(isnan(bbb)) 
   { 
      bbb = 0;
   }
   #endif
   printf("%.f + %.f*I\n", creal(bbb), cimag(bbb));

   return EXIT_SUCCESS;
}
