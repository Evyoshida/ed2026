#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ordenar_n(double *v, int n) {
    int i, j;
    double temp;
    for (i = 0; i < n - 1; i++) { // itera em n
        for (j = 0; j < n - i - 1; j++) { // itera e compara i com valores
            if (v[j] > v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    double *valores, soma = 0.0, soma_potencia = 0.0;
    double maximo, minimo, media, mediana, desvio_padrao;

    // recebe N de valores, checa valores inválidos ou fora de escala
    printf("digite a quantidade de valores:\n");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Erro: valor inválido ou fora de escala\n");
        return 1;
    }
    
    // alocação em memória
    valores = (double *)malloc(n * sizeof(double));
    if (valores == NULL) {
        printf("Erro: problema de alocação\n");
        return 1;
    }

    // inserção de valores
    printf("insira %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &valores[i]);
        soma += valores[i];
    }

    ordenar_n(valores, n);

    // máximo
    maximo = valores[n - 1];

    // minimo
    minimo = valores[0];

    // media
    media = (soma / n);

    // mediana
    if ((n % 2) == 0) {
        mediana = ((valores[(n / 2) - 1] + valores[n / 2]) / 2);
    }
    else {
        mediana = valores[abs(n / 2)];
    }

    // desvio padrâo
    for (int i = 0; i < n; i++) {
        soma_potencia += pow(valores[i] - media, 2);
    }
    desvio_padrao = sqrt(soma_potencia / n);

    // Exibição dos resultados
    printf("\n--- Resultados ---\n");
    printf("Minimo: %.2lf\n", minimo);
    printf("Maximo: %.2lf\n", maximo);
    printf("Media: %.2lf\n", media);
    printf("Mediana: %.2lf\n", mediana);
    printf("Desvio-Padrao Populacional: %.2lf\n", desvio_padrao);

    free(valores);
    return 0;
}