/*
12. Conversão de Temperatura no Planeta Vegeta:

Entre via teclado com o valor de uma temperatura em graus Celsius. Calcule e exiba a temperatura equivalente em Fahrenheit usando a fórmula (Fahrenheit = 32 + (9/5) x Celsius). A temperatura é importante para a sobrevivência dos Saiyans no Planeta Vegeta.
*/

// Importação de Biblitoecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    //Definicição do teclado para aceitar teclado brasileiro
	
	setlocale(LC_ALL, "Portuguese");

    //Declaração das variavéis
	
    float celsius, fahrenheit;

    //Entrada de Dados dos usuários

    printf("Insira o valor da temperatura em graus celsius: ");
    scanf("%f", &celsius);

    //Conversão da temperatura
    
   fahrenheit = (32 + ((1.8) * celsius));

    // Exibição do Resultado na Tela

	printf("### O valor da tensao do circuito energetico eh de %.2f F", fahrenheit);
	
	return 0;
}
