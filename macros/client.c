
#include <stdio.h>      /* printf */
#include "events.h"      /* CURRENT, HIGH */
#include "symbols.h"      /* MY_NULL */

int main ()
{
    void* num;
    int value;
    
    num = MY_NULL;
    printf ("(with MY_NULL) -> num: %p\n", num);
    
    value = CURRENT;
    printf ("(with CURRENT) -> value: %d\n", value);

    value = MY_MULT (5, 10);
    printf ("(with MY_MULT) -> value: %d\n", value);
    
    /* Output:
    (with MY_NULL) -> num: (nil)
    (with CURRENT) -> value: 4
    (with MY_MULT) -> value: 50
    */
    return 0;
}