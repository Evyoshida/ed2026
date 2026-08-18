#include <stdio.h> // sempre utilizado para corrigir warnings de tipagem de variáveis

int main() {
    int i = 0;
    short s;
    char c;
    float f;
    double d;
    long int l;

    s = 65;
    
    // printf de valores. Note que <% + letra> formata o tipo de data sendo processado.
    printf("valor de s: %c \n", s);

    //sizeof() retorna tamanho de variável:
    printf("Tamanho de i: %ld \n", sizeof(i));
    printf("Tamanho de s: %ld \n", sizeof(s));
    printf("Tamanho de c: %ld \n", sizeof(c));
    printf("Tamanho de f: %ld \n", sizeof(f));
    printf("Tamanho de d: %ld \n", sizeof(d));
    printf("Tamanho de l: %ld \n", sizeof(l));
}