#include <stdio.h>

int main() {
    int n, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    }

    printf("A soma dos múltiplos de 3 ou 5 abaixo de %d é: %d\n", n, soma);

    return 0;
}
