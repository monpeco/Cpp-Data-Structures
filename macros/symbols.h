#ifndef MY_NULL
#define MY_NULL (void *)0
#endif // #ifndef MY_NULL

//surround arguments with parenthesis
#ifndef MY_MULT
#define MY_MULT(x, y) (x) * (y)
#endif // #ifndef MY_MULT

//surround whole macro body with parenthesis
#ifndef ADD_FIVE
#define ADD_FIVE(a) ((a) + 5)
#endif // #ifndef ADD_FIVE
