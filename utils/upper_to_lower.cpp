/* tolower example */
#include <stdio.h>
#include <ctype.h>
int main (int argc, char *argv[])
{
  int PARAMS_NUMBER = 2;
  int i=0;
  char c;
  
  if (argc != PARAMS_NUMBER){
      printf("%s requires %d parameters\n\rParameters: <%s> <WORD_UPPER_CASE>", argv[0], PARAMS_NUMBER, argv[0]);
      return 1;
  }
  
  while (argv[1][i])
  {
    c=argv[1][i];
    putchar (tolower(c));
    i++;
  }
  putchar ('\n');

  return 0;
}