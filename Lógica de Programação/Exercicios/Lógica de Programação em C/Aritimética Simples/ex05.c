/*
5.Área de um Círculo Kamehameha:

/*
5.Entre via teclado com o diâmetro de um círculo. Calcule e exiba a área, que simboliza a energia do famoso ataque Kamehameha
*/

// Importação de Biblitoecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definição de Constante para calculo de área
#define PI 3.14159265359

int main(int argc, char *argv[]) {
	
    //Definicição do teclado para aceitar caracters especiais

	setlocale(LC_ALL, "portuguese_brazil");

    //Declaração das variavéis
	
	float diametro, raio, area;

    //Entrada de Dados dos usuários
	
	printf("Insira o valor do diametro do Circulo Kamehameha:");
	scanf("%f", &diametro);

    //Calculo do Raio da Circulo Kamehameha
	
	raio = diametro /2;
    
    //Calculo da Área da Circulo Kamehameha

    area = (PI*(raio*raio));
	
    // Exibição do Resultado na Tela

	printf("### A área do Circulo Kamehameha é %.2f mts/2", area);
	
	return 0;
}