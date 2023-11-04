/*
16. Conversão de Zenny para Capsule Corporation (CC):

Entre via teclado com a cotação do Zenny em relação ao Capsule Corporation (CC) e a quantidade de Zenny. Calcule e exiba o valor correspondente em Capsule Corporation (CC), como se fosse uma transação no mundo de Dragon Ball.
*/

// Importação de Biblitoecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    //Definicição do teclado para aceitar teclado brasileiro
	
	setlocale(LC_ALL, "Portuguese");

    //Declaração das variavéis

    float cotacaoZenny, qtdZenny, valorCC;

    //Entrada de Dados dos usuários

    printf("Conversor de moeda Zenny para Capsule Corporation(CC)\n");
    printf("Insira o valor da cotação atual: ");
    scanf("%f", &cotacaoZenny);
    printf("Insira o valor da quantidade disponivel da moeda Zenny: ");
    scanf("%f", &qtdZenny);

    //Coversão do valor em zenny para CC

    valorCC = qtdZenny * cotacaoZenny;

    // Exibição do valor disponivel

	printf("### O valor total disponivel em CC eh: %.2f", valorCC);

	
	return 0;
}
