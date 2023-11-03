/*
10. Conversão de Distância Saiyan:

Sabendo que uma milha Saiyan equivale a 1852 metros, e que um quilômetro Saiyan possui mil metros, faça um programa para converter milhas Saiyan em quilômetros. A distância convertida é como se fosse uma medida de distância entre planetas.

*/

// Importação de Biblitoecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    //Definicição do teclado para aceitar teclado brasileiro
	
	setlocale(LC_ALL, "Portuguese");

    //Declaração das variavéis
	
    float milhas, distancia;

    //Entrada de Dados dos usuários

    printf("Digite a quantidade a distancia em milhas Saiyan: ");
    scanf("%f", &milhas);

    //Calculo da conversão de milhas para quilômetro
    distancia = milhas/1852;

    // Exibição do Resultado na Tela

	printf("### A distancia para o planeta Saiyan eh de %.2f KM", distancia);
	
	return 0;
}
