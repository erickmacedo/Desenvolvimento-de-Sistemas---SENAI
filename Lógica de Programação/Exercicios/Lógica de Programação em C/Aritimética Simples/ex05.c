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
	
	setlocale(LC_ALL, "portuguese_brazil");
	
	float diametro, raio;
	
	printf("Insira o valor do diametro do Circulo Kamehameha:");
	scanf("%f", &diametro);
	
	raio = diametro /2;
	
	printf("### A área do Circulo Kamehameha é %.2f mts/2", (PI*(raio*raio)));
	
	return 0;
}
