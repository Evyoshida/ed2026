#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *proximo;
} No;

typedef struct {
    No *inicio;
    No *fim;
} Fila;

void inicializar(Fila *f) {
    f->inicio = NULL;
    f->fim = NULL;
}

// PUSH: insere um elemento no final da fila
void PUSH(Fila *f, int valor) {
    No *novo = (No *) malloc(sizeof(No));

    if (novo == NULL) {
        printf("Erro: memoria insuficiente!\n");
        return;
    }

    novo->valor = valor;
    novo->proximo = NULL;

    if (f->fim == NULL) {
        f->inicio = novo;
        f->fim = novo;
    } else {
        f->fim->proximo = novo;
        f->fim = novo;
    }

    printf("Elemento %d inserido.\n", valor);
}

// POP: remove e retorna o primeiro elemento
int POP(Fila *f, int *valor) {
    if (f->inicio == NULL) {
        return 0;
    }

    No *removido = f->inicio;
    *valor = removido->valor;

    f->inicio = f->inicio->proximo;

    if (f->inicio == NULL) {
        f->fim = NULL;
    }

    free(removido);
    return 1;
}

// PEEK: consulta o primeiro elemento sem remover
int PEEK(Fila *f, int *valor) {
    if (f->inicio == NULL) {
        return 0;
    }

    *valor = f->inicio->valor;
    return 1;
}

// Exibe os elementos da fila
void exibir(Fila *f) {
    No *atual = f->inicio;

    printf("Fila: ");

    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }

    printf("\n");
}

// Libera toda a memoria da fila
void liberar(Fila *f) {
    int valor;

    while (POP(f, &valor)) {

    }
}

int main(void) {
    Fila fila;
    int valor;

    inicializar(&fila);

    PUSH(&fila, 10);
    PUSH(&fila, 20);
    PUSH(&fila, 30);

    exibir(&fila);

    if (PEEK(&fila, &valor)) {
        printf("Primeiro elemento: %d\n", valor);
    } else {
        printf("Fila vazia!\n");
    }

    if (POP(&fila, &valor)) {
        printf("Elemento removido: %d\n", valor);
    } else {
        printf("Fila vazia!\n");
    }

    exibir(&fila);

    liberar(&fila);

    return 0;
}