#include <stdio.h>
#include <string.h>

int main() {
    char palavra[6];
    char * posicao;
    char letra;
    int tentativas = 3;
    
    while ( tentativas > 0 ) {
        printf("Digite a palavra: ");
        scanf("%s", palavra);
        getchar();
            
        printf("Digite a letra: ");
        letra = getchar();
    
        posicao = strchr(palavra, letra);
    
        if( posicao != NULL ) {
            printf("Posicao: %s\n", posicao);
            return 0;
        } else {
            printf("Nao encontrada (tentativas restantes %d)!\n", --tentativas);
        }
    }

    return 0;
} 