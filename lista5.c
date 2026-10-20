#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero[100], i, j, aux;

    // Entrada dos 100 números
    for (i = 0; i < 100; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numero[i]);
    }

    // Ordenar do maior para o menor
    for (i = 0; i < 99; i++) {
        for (j = i + 1; j < 100; j++) {
            if (numero[i] < numero[j]) {
                aux = numero[i];
                numero[i] = numero[j];
                numero[j] = aux;
            }
        }
    }

    // Imprimir na ordem inversa
    printf("\nNumeros em ordem inversa:\n");

    for (i = 99; i >= 0; i--) {
        printf("%d\n", numero[i]);
    }

    return 0;
}
