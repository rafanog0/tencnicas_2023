#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(void) {
  lista *l1 = cria_lista();
  int n;

  for (int i = 0; i < 10; i++) {
    insere_lista(l1, i);
  }

  scanf("%d", &n);
  printf("Achou = %d\n", busca_lista(l1, n));

  return 0;
}