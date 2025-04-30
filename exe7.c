#include <stdio.h>
#include <string.h>

int main() {
    char senha[20];
    int tentativas = 3;
    char senha_correta[] = {'a', 'z', 'i', 'm', 'o', '\0'};

    while (tentativas > 0) {
        printf("Digite a senha: ");
        scanf("%s", senha);
        if (strcmp(senha, senha_correta) == 0) {
            printf("Senha correta!\n");
            break;
        } else {
            printf("Senha incorreta. (tentativas restantes: %d)\n", --tentativas);
        }
    }
    return 0;
}