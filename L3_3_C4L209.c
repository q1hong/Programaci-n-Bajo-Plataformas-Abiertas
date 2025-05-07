#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANO 5

int max(int a, int b) { return (a > b) ? a : b; }

int encontrar_diagonal_mas_larga(int matriz[TAMANO][TAMANO]) {
    int max_longitud = 0;
    for (int i = 0; i < TAMANO; i++) {
        for (int j = 0; j < TAMANO; j++) {
            if (matriz[i][j] == 1) {
                int longitud = 1;
                int x = i, y = j;
                while (x + 1 < TAMANO && y + 1 < TAMANO && matriz[x+1][y+1] == 1) {
                    longitud++;
                    x++; y++;
                }
                max_longitud = max(max_longitud, longitud);
            }
        }
    }
    return max_longitud;
}

int main() {
    srand(time(NULL));
    int matriz[TAMANO][TAMANO];
    for (int i = 0; i < TAMANO; i++) {
        for (int j = 0; j < TAMANO; j++) {
            matriz[i][j] = rand() % 2;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    int resultado = encontrar_diagonal_mas_larga(matriz);
    printf("La secuencia de 1s más grande es: %d\n", resultado);
    return 0;
}