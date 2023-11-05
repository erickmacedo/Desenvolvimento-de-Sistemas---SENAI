/*
4. Área da Arena de Luta:

Calcule e exiba a área de um retângulo, usando os valores da base e altura que serão digitados. Se a área for maior que 8000, exiba a mensagem "Luta Épica!"
*/

// Importação de Biblitoecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    //Definicição do teclado para aceitar teclado brasileiro
	
	setlocale(LC_ALL, "portuguese_brazil");

    //Declaração das variavéis

    float base, altura, area;

    //Entrada de Dados dos usuários

    printf("Insira o valor da base da arena da luta: ");
    scanf("%f", &base);
    printf("Insira o valor da altura da arena da luta: ");
    scanf("%f", &altura);

    // Calculo da area da Arena de Luta

    area = base * altura;

    // Exibe mensagem para o usuário caso o tamanho da área da Arena de Luta seja maior que 8000
    if(area > 8000)
        printf("Luta Epica!");
    
    return 0;
}
