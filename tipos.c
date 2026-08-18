#include <stdio.h> // diretiva de pré-compilação, sempre utilizado para corrigir warnings de tipagem de variáveis

#define MAXIMOSTR 100 // define o valor de MAXIMOSTR para ser usado ao longo do código

int main() { // nunca se esqueça de iniciar o main
    int i = 0;
    short s;
    char c;
    float f;
    double d;
    long int l;

    s = 65;
    
    // printf de valores. Note que <% + letra> formata o tipo de data sendo processado
    printf("valor de s: %c \n", s);

    //sizeof() retorna tamanho de variável:
    printf("Tamanho de i: %ld \n", sizeof(i));
    printf("Tamanho de s: %ld \n", sizeof(s));
    printf("Tamanho de c: %ld \n", sizeof(c));
    printf("Tamanho de f: %ld \n", sizeof(f));
    printf("Tamanho de d: %ld \n", sizeof(d));
    printf("Tamanho de l: %ld \n", sizeof(l));

    // while:
    while (i < 6) {
        printf("contagem com while %d\n", i);
        i++;
    }

    // for:
    for (i = 6; i < 11; i++) {
        printf("contagem com for %d\n", i);
    }

    // if e else if:
    int preco = 100;
    int carteira = 50;
    if (carteira < preco) {
        printf("você está pobre! Falta %d\n", (preco - carteira));
    }
    else if (carteira == preco) {
        printf("você ficou pobre!");
    }
    else {
        printf("você está rico! Te sobra %d\n", (carteira - preco));
    }

    // switch case:
    char letra = 'a';
    switch (letra) {
        case 'a':
        printf("sua letra é a \n");
        break;

        case 'b':
        printf("sua letra é b \n");
        break;
    }

    // strings:
    char str[MAXIMOSTR];

    
    printf("Qual o seu nome: ");
    fgets(str, MAXIMOSTR, stdin); // pega valores de input na execução. Alternativamente, scanf() é uma opção
    printf("\nAlo %s!\n\n", str);
}