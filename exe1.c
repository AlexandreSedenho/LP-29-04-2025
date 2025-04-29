#include <stdio.h>

int main() {
    char nome[10] = { 'A', 'l', 'e', 'x', 'a', 'n', 'd', 'r', 'e', '\0' };

    printf("Nome: %s\n", nome);
    
    for(int i = 0; i < 10; i++) {
        printf("* %c ", nome[i]);
    }
    
    return 0;
}
