#include <stdio.h>

void sumar_todas_diagonales(int n, int matriz[n][n]) {

    printf("\n- Sumas de las diagonales paralelas a la principal:\n");
    for (int d = 0; d < n; d++) {
        int suma = 0;
        for (int i = 0; i < n - d; i++) {
            suma += matriz[i][i + d]; 
        }
        printf("Diagonal superior %d: %d\n", d, suma);
    }

    for (int d = 1; d < n; d++) {
        int suma = 0;
        for (int i = 0; i < n - d; i++) {
            suma += matriz[i + d][i]; 
        }
        printf("Diagonal inferior %d: %d\n", d, suma);
    }

    printf("\n- Sumas de las diagonales paralelas a la secundaria:\n");
    for (int d = 0; d < 2 * n - 1; d++) {
        int suma = 0;
        for (int i = 0; i < n; i++) {
            int j = d - i;
            if (j >= 0 && j < n) {
                suma += matriz[i][j];
            }
        }
        printf("Diagonal %d: %d\n", d, suma);
    }
}

int main() {
    int matriz1[3][3] = {
        {3, 1, 3},
        {1, 0, 2},
        {3, 3, 3}
    };

    int matriz2[2][2] = {
        {1, 2},
        {2, 1}
    };
    
    int matriz3[4][4] = {
        {1, 5, 1, 4},
        {9, 2, 1, 1},
        {1, 1, 3, 2},
        {4, 1, 1, 4}
    };

    printf("\nMatriz 1");
    sumar_todas_diagonales(3, matriz1);

    printf("\nMatriz 2");
    sumar_todas_diagonales(2, matriz2);

    printf("\nMatriz 3");
    sumar_todas_diagonales(4, matriz3);

    return 0;
}