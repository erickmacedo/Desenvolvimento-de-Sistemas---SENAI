/*
6. Volume de uma Esfera do Dragão:

Calcule e exiba o volume de uma esfera usando o valor de seu
diâmetro, que será digitado. O volume é a capacidade da Esfera do Dragão de realizar desejos.
*/

// Importação de Biblitoecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definição de Constante para calculo do volume
#define PI 3.14159265359

int main(int argc, char *argv[]) {

    //Definicição do teclado para aceitar caracters especiais
	
	setlocale(LC_ALL, "Portuguese");

    //Declaração das variavéis
	
	float diametro, raio, volume;

    //Entrada de Dados dos usuários
	
	printf("Insira o valor do diametro da Esfera do Dragão:");
	scanf("%f", &diametro);
	
    //Calculo do Raio da Esfera do Dragão
	raio = diametro /2;

    //Calculo do Volume da Esfera do Dragão
    volume = ((1.33333333*PI)*(raio*raio*raio));

    // Exibição do Resultado na Tela

	printf("### O volume da Esfera do Dragão é %.5f", volume);
	
	return 0;
}
