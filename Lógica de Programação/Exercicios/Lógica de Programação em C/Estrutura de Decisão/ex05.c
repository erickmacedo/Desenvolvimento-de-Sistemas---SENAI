/*
5. Área de Combate do Quadrado:

Calcule e exiba a área de um quadrado a partir do valor de seu lado que será digitado. Se a área for maior que 9000, exiba a mensagem "Super Poderoso!"
*/

// Importação de Biblitoecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    //Definicição do teclado para aceitar teclado brasileiro
	
	setlocale(LC_ALL, "portuguese_brazil");

    //Declaração das variavéis

    float lado, area;

    //Entrada de Dados dos usuários

    printf("Insira o valor do lado do Quadrado: ");
    scanf("%f", &lado);

    // Calculo da area de Combate do Quadrado

    area = lado * lado;

    // Exibe mensagem para o usuário caso o tamanho da área da Arena de Luta seja maior que 8000
    if(area > 9000)
        printf("Super poderoso!");

}
