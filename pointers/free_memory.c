#include <stdlib.h>
#include <stdio.h>

int main(){
    int *p = malloc(10 * sizeof *p); /* allocation of memory */
    if (p == NULL) 
    {
        printf("malloc failed\n");
        return -1;
    }
    
    printf("malloc OK, p:[%p], p*[%d]\n", p, *p);
    free(p); /* release of memory */
    /* note that after free(p), even using the *value* of the pointer p
       has undefined behavior, until a new value is stored into it. */
    
    /* reusing/re-purposing the pointer itself */
    int i = 42;
    p = &i; /* This is valid, has defined behaviour */
    printf("reusing pointer, p:[%p], p*[%d]\n", p, *p);

    return 0;
}
