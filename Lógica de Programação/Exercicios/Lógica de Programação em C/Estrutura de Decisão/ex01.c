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

    float goku, vedita;

    //Entrada de Dados dos usuários

    printf("Insira o valor do poder de Goku: ");
    scanf("%f", &goku);
    printf("Insira o valor do poder de Vedita: ");
    scanf("%f", &vedita);

    // Análise para verificar qual é o mais poderoso
    if(goku > vedita)
        printf("Goku é o mais poderoso");
    else if(vedita > goku)
        printf("Vedita é mais poderoso");

	return 0;
}
