#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int A, Arreglo[100];
    int i;

    printf("Bienvenido, ingresa un número del 1 al 100:\n");
    scanf("%d", &A);

    // Verificar si el número ingresado está dentro del rango
    if (A >= 1 && A <= 100) {
        // Inicializar el generador de números aleatorios con una semilla
        srand(time(NULL));

        // Llenar el arreglo con números aleatorios hasta el número 100
        for (i = 0; i < A; i++) {
            Arreglo[i] = rand() % 100 + 1; // Genera un número aleatorio entre 1 y 100
        }

        // Imprimir el arreglo
        printf("Arreglo de números aleatorios hasta el %d:\n", A);
        for (i = 0; i < A; i++) {
            printf("%d ", Arreglo[i]);
        }
        printf("\n");
    } else {
        printf("El número ingresado está fuera del rango permitido (1-100).\n");
    }

    return 0;
}
