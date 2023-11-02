#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*
1.Medindo a Área do Planeta Namek:

Entre via teclado com a base e a altura de um retângulo. Calcule e exiba a área, que representa a extensão do solo em Namek.
*/


int main (){

    //Definicição do teclado para aceitar caracters especiais

    setlocale(LC_ALL, "portuguese_brasil");

    //Declaração das variavéis
    float base, altura, area; 


    //Entrada de Dados dos usuários

    printf("Insira a base do Planeta Namek: ");
    scanf("%f", &base);    
    printf("Insira a altura do Planeta Namek: ");
    scanf("%f", &altura);

    //Calculo da Área do Planeta Namek

    area = base*altura;

    // Exibição do Resultado na Tela

    printf("A area do Planeta Namek é: %.2f", area);

    return 0;
}