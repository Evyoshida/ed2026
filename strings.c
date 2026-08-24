    #include <stdio.h>
    #define MAXIMOSTR 100 // define o valor de MAXIMOSTR para ser usado ao longo do código
    
    int main() {
	    // strings:
	    char input[MAXIMOSTR];

	    
	    printf("Qual o seu nome: ");
	    fgets(input, MAXIMOSTR, stdin); // pega valores de input na execução
	    printf("\nAlo %s!\n\n", input);
	    
	    printf("Qual a sua idade: ");
	    scanf("%s", input); // alternativa para fgets
	    printf("\nAlo %s!\n\n", input);
    }
