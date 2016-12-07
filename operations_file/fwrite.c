#include<stdio.h>

int main ()
{
   FILE *fp;
   char str[] = "This is a string (a ramdon string)\n";

   fp = fopen( "file.txt" , "w" );
   fwrite(str , 1 , sizeof(str) , fp );

   fclose(fp);
   
   printf("sizeof(char): %ld\n", sizeof(char));
  
   return(0);
}