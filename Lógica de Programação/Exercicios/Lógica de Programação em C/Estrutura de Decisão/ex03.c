/*
2. Os Lados do Ringue

Entre com dois valores distintos e exiba o mais fraco.
*/

// Importação de Biblitoecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    //Definicição do teclado para aceitar teclado brasileiro
	
	setlocale(LC_ALL, "portuguese_brazil");

    //Declaração das variavéis

    float saiyanjin1, saiyajin2;

    //Entrada de Dados dos usuários

    printf("Insira o valor do Saiyajins 1: ");
    scanf("%f", &saiyanjin1);
    printf("Insira o valor do Saiyajins 2: ");
    scanf("%f", &saiyajin2);

    // Análise para verificar qual dos dois ladso é mais o mais fraco
    if(saiyanjin1 > saiyajin2)
        printf("O Saiyanjin 1 é o mais poderoso");
    else if(saiyajin2 > saiyanjin1)
        printf("O Saiyanjin 2 é o mais poderoso");
    else
        printf("O 2 Saiyanjins tem poderes identicos");
        
	return 0;
}
