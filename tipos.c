#include <stdio.h> // sempre utilizado para corrigir warnings de tipagem de variáveis

int main() {
    int i;
    short s;
    char c;

    s = 30000;
    s = s*s;
    
    printf("valor de s: %hd \n", s);
}