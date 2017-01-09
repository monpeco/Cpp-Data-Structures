#include <stdio.h>
static int init(void)
{
    printf("Running before main\n");
    return 1;
}
static int init_status = init();
int main()
{
    printf("main starting...\n");
    return 0;
}