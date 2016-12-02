#include <stdio.h>
#include <string.h>


using namespace std;

int main () 
{
    static unsigned char cmd_code[2] = "8";
    static unsigned char command[20] = "123456";
    int offset = 2;
    
    printf("%s\n", cmd_code); // imprimir el valor original
    
    memcpy(cmd_code, command+offset, 2);
    
    printf("%s\n", cmd_code); //imprimir el valor copiado



    printf("&cmd_code: %p\n", &cmd_code); 
    printf("&cmd_code[0]: %p\n", &cmd_code[0]);
    printf("&cmd_code[1]: %p\n", &cmd_code[1]);
    printf("cmd_code: %p\n", cmd_code);
    return 0; 
    
}