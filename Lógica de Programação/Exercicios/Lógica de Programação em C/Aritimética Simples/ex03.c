/*
3. Calcule e exiba a área de um quadrado usando o valor de sua diagonal, que será digitado. A diagonal é como a energia misteriosa que circula entre os Saiyans.
*/

// Importação de Biblitoecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
     //Definicição do teclado para aceitar caracters especiais

	setlocale(LC_ALL, "portuguese_brazil");

    //Declaração das variavéis
	
	float diagonal, lado;
	
    //Entrada de Dados dos usuários

	printf("Insira o valor da diagonal do Quadrado Saiyan: ");
	scanf("%f", &diagonal);
	
    //Calculo do lado do Quadrado Saiyan

	lado = (diagonal/2);

    // Exibição do Resultado na Tela

	printf("### A Área do quadrado Saiyan é %.2f mts/2", lado*lado);
}
