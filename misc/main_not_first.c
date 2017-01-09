#include <stdio.h>

void __attribute__ ((constructor)) premain()
{
    printf("Running before main\n");
}

int main(int argc, char *argv[])
{
    printf("Main Start()\n");
    return 0;
}