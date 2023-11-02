/*
4. Área de um Triângulo Z:

Calcule e exiba a área de um triângulo a partir dos valores da base e altura, que serão digitados. A área representa a área de impacto de um poderoso ataque Z.*/

// Importação de Biblitoecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    //Definicição do teclado para aceitar caracters especiais
	
	setlocale(LC_ALL, "portuguese_brazil");

    //Declaração das variavéis
	
	float altura, base, area;

    //Entrada de Dados dos usuários
	
	printf("Insira o valor da base do Triangulo Z: ");
	scanf("%f", &base);
	printf("Insira o valor da altura  do Triangulo Z: ");
	scanf("%f", &altura);
    
    //Calculo da Área do Triangulo Z

    area = ((base*altura)/2);

    // Exibição do Resultado na Tela
	
	printf("### A área do Triangulo Z é %.2f mts/2", area);
	
	return 0;
}