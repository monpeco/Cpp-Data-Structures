#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a; float b; char c;
    char* str = "0123456789";
    printf("Print with precision 6\n");
    printf("%.6s\n", str + 1);
    printf("-------\n");

    printf("Print with precision 6 and pointer arithmetic\n");
    printf("%.6s\n", str + 3);
    printf("-------\n");

    printf("Print with precision 6 and minimun width\n");
    printf("%10.6s\n", str);    
    printf("-------\n");
    
    printf("Print with precision 6 and minimun width left-justify\n");
    printf("%-10.6s\n", str);    
    printf("-------\n");    

    
    return 0;
}