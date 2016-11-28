#include <stdio.h>

void funcion(int* valor){ 
  printf("----> valor entrada: %d\n",*valor);
  *valor = 1; 
  printf("----> valor salida: %d\n",*valor);

}

int main()
{
  int var = 0;
  printf("antes de la llamada: %d\n",var);

  funcion(&var);
  printf("despues de la llamada: %d\n",var);
}