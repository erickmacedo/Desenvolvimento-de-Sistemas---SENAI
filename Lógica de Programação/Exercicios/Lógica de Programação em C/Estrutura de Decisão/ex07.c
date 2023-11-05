/*
7. Transformação de Peso:

Entre com o peso (em kg) e a altura (em metros) de um guerreiro. Após a digitação, exiba se este guerreiro está ou não com seu poder ideal, com base na tabela de relação poder/altura².
*/

// Importação de Biblitoecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    //Definicição do teclado para aceitar teclado brasileiro
	
	setlocale(LC_ALL, "portuguese_brazil");

    //Declaração das variavéis

    float peso, altura, relacao;

    //Entrada de Dados dos usuários

    printf("Insira o valor 1: ");
    scanf("%f", &peso);
    printf("Insira o valor 2: ");
    scanf("%f", &altura);

    // Calculo da relação entre peso e altura

    relacao = (peso / (altura*altura));

    // Análise para verificar e exibir na tela a transformação de peso

    if(relacao<20)
        printf("Abaixo do peso");
    else if((relacao<=20)&&(relacao<25))
        printf("Peso ideal");
    else if(relacao>25)
        printf("Acima do peso");
    
        
	return 0;
}
