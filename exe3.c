#include <stdio.h>

int main() {
    char senha[20];
    int tentativas = 3;
    char senha_correta[] = {'a', 'z', 'i', 'm', 'o', '\0'};

    while (tentativas > 0) {
        printf("Digite a senha: ");
        scanf("%s", senha);

        int i = 0;
        int senha_correta_flag = 1;
        while (senha_correta[i] != '\0' && senha[i] != '\0') {
            if (senha[i] != senha_correta[i]) {
                senha_correta_flag = 0;
                break;
            }
            i++;
        }

        if (senha_correta_flag && senha[i] == '\0') {
            printf("Seja bem vindo!\n");
            return 0;
        } else {
            tentativas--;
            if (tentativas > 0) {
                printf("Senha errada. Tentativas restantes: %d\n", tentativas);
            } else {
                printf("Tente novamente mais tarde\n");
            }
        }
    }

    return 0;
}