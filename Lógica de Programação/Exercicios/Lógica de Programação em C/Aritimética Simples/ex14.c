/*
14. Potência da Fusão Saiyan:

Entre via teclado com dois valores quaisquer "X" e "Y". Calcule e exiba o resultado da fusão ("X" elevado a "Y"). Pesquise as funções Exp e Ln, que podem ser usadas para elevar o poder de fusão dos Saiyans.

*/

// Importação de Biblitoecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char *argv[]) {

    //Definicição do teclado para aceitar teclado brasileiro
	
	setlocale(LC_ALL, "Portuguese");

    //Declaração das variavéis
	
    int x, y, resultado;

    //Entrada de Dados dos usuários

    printf("Insira o valor de X: ");
    scanf("%d", &x);

    printf("Insira o valor de Y: ");
    scanf("%d", &y);
    
    // Calcular a Fusão

    resultado = pow(x, y);

    // Exibição do Resultado na Tela

	printf("### O valor da fusao e: %d", resultado);
	
	return 0;
}
