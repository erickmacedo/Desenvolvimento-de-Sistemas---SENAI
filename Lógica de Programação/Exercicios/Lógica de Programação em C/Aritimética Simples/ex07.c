/*
7. Área de uma Esfera Shenlong:

Calcule e exiba a área de uma esfera usando o valor de seu diâmetro, que será digitado. A área representa o poder e a sabedoria do Dragão Shenlong.
*/

// Importação de Biblitoecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definição de Constante para calculo de área
#define PI 3.14159265359

int main(int argc, char *argv[]) {
	//Definicição do teclado para aceitar caracters especiais

	setlocale(LC_ALL, "Portuguese");

    //Declaração das variavéis
	
	float diametro, raio, area;

    //Entrada de Dados dos usuários
	
	printf("Insira o valor do diametro da Esfera Shenlong:");
	scanf("%f", &diametro);
	
    //Calculo do Raio da Esfera Shenlong
	raio = diametro /2;

    //Calculo da Área da Esfera Shenlong
    area = 4*PI*(raio*raio);

    // Exibição do Resultado na Tela
    	
	printf("### O volume da Esfera Shenlong é %.5f", area);
	
	return 0;
}
