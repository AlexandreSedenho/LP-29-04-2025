#include <stdio.h>
#include <string.h>

int main() {
  char nome[20];
  char sobrenome[20];
  char espaco[] = " ";
  
  printf("Digite seu primeiro nome: ");
  scanf("%19s", nome);
  
  strcat(nome, espaco);
  
  printf("Digite seu sobrenome: ");
  scanf("%19s", sobrenome);

  strcat(nome, sobrenome);
  printf("%s\n", nome);

  return 0;
}