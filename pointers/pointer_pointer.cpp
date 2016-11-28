#include <stdio.h>
#include <stdlib.h>

void funcion(FILE **valor){ 
  printf("----> valor entrada: %p\n",*valor);
  fprintf(*valor, "dentro de funcion\n");
  printf("----> valor salida: %p\n",*valor);

}

int main()
{
  int var = 0;
  char sArchPlano[30] = "text_prueba.txt";
  FILE *pPlano;

  if ((pPlano = fopen(sArchPlano,"w")) == NULL)
  {
     printf("ERROR al abrir archivo de salida [%s]\n",sArchPlano);
     exit(1);
  }
  
  fprintf(pPlano,"Impresion en el main\n");

  funcion(&pPlano);
  
  return 0;
}