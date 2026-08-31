#include <stdio.h> // diretiva de pré-compilação, sempre utilizado para corrigir warnings de tipagem de variáveis

#include <stdbool.h> // permite variáveis booleanas que não são nativas do C
#include <string.h> // implementa funções únicas para strings

int main() { // nunca se esqueça de iniciar o main

    // variáveis:
    int i = 2; // %d ou %i, apenas valores inteiros
    float f = 2e2; // %f ou %F, aceita notação científica
    double d = 2E2; // %lf, aceita notação científica
    char c = '!'; // %c, armazena apenas um caractere
    char s[] = "Hello World";// %s, para strings

    // prefixos short, long, unsigned:
    short int si = -2; // %hd
    unsigned int ui = 2; // %u
    long int li = 22222222222; // %ld ou %li
    long long int lli = 2; // %lld ou %lli
    unsigned long int uli; // %lu
    unsigned long long int ulli; // %llu
    long double ld; // %Lf

    // criação de variáveis imutáveis, recomendado nomear com CAPS:
    const int CI = 2;

    // booleanos, requerem <stdbool.h>:
    bool b = true;

    (b == true) ? printf("é verdade\n\n") : printf("é mentira\n\n");

    // testes:
    int* ptr = &i; // &i retorna ponteiro de valor. Formatado por %p
    printf("%i está salvo em: %p\n\n", *ptr, ptr); // *ptr retorna o valor salvo naquele espaço de memória 

    char exclama[] = "!";
    strcat(s, exclama); // concatenação de STRINGS exclusiva do <string.h>
    printf("%s %c\n", s, s[strlen(s) - 1]); // strlen obtém o tamanho da string. Diferente de sizeof

    return 0;
}
