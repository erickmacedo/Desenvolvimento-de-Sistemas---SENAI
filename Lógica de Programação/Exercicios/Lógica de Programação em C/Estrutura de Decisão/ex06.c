/*
6. Torneio Triangular:

Entre com três valores distintos e exiba o mais forte.
*/

// Importação de Biblitoecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    //Definicição do teclado para aceitar teclado brasileiro
	
	setlocale(LC_ALL, "portuguese_brazil");

    //Declaração das variavéis

    int valor1, valor2, valor3;

    //Entrada de Dados dos usuários

    printf("Insira o valor 1: ");
    scanf("%d", &valor1);
    printf("Insira o valor 2: ");
    scanf("%d", &valor2);
    printf("Insira o valor 3: ");
    scanf("%d", &valor3);

    // Análise para verificar e exibir na tela qual valor é o mais forte

    if ((valor1 > valor2) && (valor1 > valor3))
        printf("O valor 1 é o maior!");
    else if ((valor2 > valor1) && (valor2 > valor3))
        printf("O valor 2 é o maior!");
    else
        printf("O valor 3 é o maior!");
    
        
	return 0;
}
