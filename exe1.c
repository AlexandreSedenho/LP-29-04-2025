#include <stdio.h>

int main() {
    char nome[10] = "Alexandre";

    printf("Nome: %s\n", nome);
    
    for(int i = 0; i < 10; i++) {
        printf("* %c ", nome[i]);
    }
    
    return 0;
}
