#include <stdio.h>

void imprimir_binario(int n) {
    if (n > 1) imprimir_binario(n / 2);
    printf("%d", n % 2);
}

int main(){
    int n;
    printf("Ingrese el numero que desea representar en binario: ");
    while (scanf("%d", &n) != 1 || n <= 0) {
        scanf("%*[^\n]"); 
        scanf("%*c");    
        printf("Entrada inválida. Ingrese un número entero positivo: ");
    }
    printf("Representacion binaria: ");
    imprimir_binario(n);
    printf("\n");
    return 0;
};
