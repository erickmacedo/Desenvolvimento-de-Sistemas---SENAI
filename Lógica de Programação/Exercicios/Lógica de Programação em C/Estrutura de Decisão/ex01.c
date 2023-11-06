/*
1. Goku vs. Vegeta:

Entre com dois valores distintos e exiba o mais poderoso.
*/

// Importação de Biblitoecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    //Definicição do teclado para aceitar teclado brasileiro
	
	setlocale(LC_ALL, "portuguese_brazil");

    //Declaração das variavéis

    float goku, vegeta;

    //Entrada de Dados dos usuários

    printf("Insira o valor do poder de Goku: ");
    scanf("%f", &goku);
    printf("Insira o valor do poder de Vegeta: ");
    scanf("%f", &vegeta);

    // Análise para verificar qual é o mais poderoso
    if(goku , vegeta)
        printf("Goku é o mais poderoso");
    else if(vegeta > goku)
        printf("Vegeta é mais poderoso");

	return 0;
}
