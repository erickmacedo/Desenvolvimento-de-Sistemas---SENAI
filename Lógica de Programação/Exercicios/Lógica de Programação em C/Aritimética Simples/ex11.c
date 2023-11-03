/*
11. Tensão no Circuito Energético:

Entre via teclado com os valores da resistência e corrente elétrica. Calcule e exiba a tensão usando a Lei de Ohm (Tensão = Corrente x Resistência). A tensão é como a energia em um circuito energético Saiyan.
*/

// Importação de Biblitoecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    //Definicição do teclado para aceitar caracters especiais
	
	setlocale(LC_ALL, "Portuguese");

    //Declaração das variavéis
	
    float tensao, corrente, resistencia;

    //Entrada de Dados dos usuários

    printf("Insira o valor da corrente: ");
    scanf("%f", &corrente);

    printf("Insira o valor da resistencia: ");
    scanf("%f", &resistencia);

    //Calculo da tensão
    
    tensao = corrente * resistencia;

    // Exibição do Resultado na Tela

	printf("### O valor da tensao do circuito energetico eh de %.2f V", tensao);
	
	return 0;
}
