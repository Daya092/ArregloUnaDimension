#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arreglo[88];
    int i, N, Numero = 0;
  srand(time(NULL));

  for (i = 0; i < 88; i++) 
  {
      arreglo[i] = rand() % 100;
  }
  printf("Bienvenido, ingresa un numero a verificar del (1 al 100): ");
  scanf("%d", &N);

  for (i = 0; i < 88; i++) 
  {
      if (arreglo[i] == N) 
      {
          Numero = 1;
          break;
      }
  }


  if (Numero) 
  {
      printf("El valor %d se ha encontrado.\n", N);
  } 
     
  else 
  {
      printf("El Numero %d no se encontraba,estos eran los valores, prueba con otro.\n", N);
  }

  for (i = 0; i < 88; i++) 
  {
      printf("%d ", arreglo[i]);
  }
  
  return 0;
  }