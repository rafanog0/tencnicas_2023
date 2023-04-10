#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


struct no {

  knot *prox;
  int n;
};

struct lista {

  knot *primeiro;
};

#define ENCONTROU 1
#define NAO_ENCONTROU 0

lista *cria_lista() {
  lista *nova = (lista *)malloc(sizeof(lista));
  if (nova == NULL)
    return NULL;
  nova->primeiro = NULL;
  return nova;
}

void insere_lista(lista *l, int n) {
  knot *novo = (knot *)malloc(sizeof(knot));
  if (novo == NULL)
    return;
  novo->n = n;
  novo->prox = l->primeiro;
  l->primeiro = novo;
}

int busca_lista(lista *l, int n) {
  knot *atual = l->primeiro;
  while (atual != NULL) {
    if (atual->n == n) {
      return ENCONTROU;
    }

    atual = atual->prox;
  }
  return NAO_ENCONTROU;
}