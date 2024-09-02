#include <stdio.h>

int main(void) {

  printf("defina o primeiro valor:\n");
  int entradaUm;
  scanf("%d", &entradaUm);

  printf("defina o segundo valor:\n");
  int entradaDois;
  scanf("%d", &entradaDois);

  int soma = entradaUm + entradaDois;

  printf("a soma dos valores é: %d\n", soma);

   }