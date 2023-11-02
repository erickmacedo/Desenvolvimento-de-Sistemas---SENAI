/*
2. Área de um Quadrado Saiyan:

Calcule e exiba a área de um quadrado, usando o valor de sua aresta que será digitado. A área representa a força do Ki de um guerreiro Saiyan.
*/

// Importação de Biblitoecas

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main (){

    //Definicição do teclado para aceitar caracters especiais

    setlocale(LC_ALL, "portuguese_brazil");

    //Declaração das variavéis

    float area, aresta;

    //Entrada de Dados dos usuários

    printf("Insira a aresta do Quadrado Saiyan: ");
    scanf("%f", &aresta);    

    //Calculo da Área do Quadrado Saiyan

    area = aresta*aresta;

    // Exibição do Resultado na Tela

    printf("A area do Quadrado Saiyan é: %.2f", area);

    return 0;
}