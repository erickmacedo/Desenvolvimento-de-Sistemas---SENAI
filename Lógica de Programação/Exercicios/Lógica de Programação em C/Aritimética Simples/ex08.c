/*
8. Volume de um do Cone Namekusei:

Calcule e exiba o volume de um cone a partir dos valores da altura e do raio da base, que serão digitados. O volume é como a vitalidade do solo de Namekusei.
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
	
	float raioBase, altura, volume;

    //Entrada de Dados dos usuários
	
	printf("Insira o valor do raio da base da do Cone Namekusei:");
	scanf("%f", &raioBase);

    printf("Insira o valor da altura da base da do Cone Namekusei:");
	scanf("%f", &altura);
	
    
    //Calculo do Volume da do Cone Namekusei
    volume = ((PI*(raioBase*raioBase)*altura)/3);

    // Exibição do Resultado na Tela

	printf("### O volume da do Cone Namekusei é %.5f", volume);
	
	return 0;
}
