/*
Verificar se três valores quaisquer (Ki, Chakra, Haki) formam ou não um "triângulo retângulo" em termos de poder. Lembre-se que o quadrado do "Ki" é igual à soma dos quadrados do "Chakra" e do "Haki"
*/

// Importação de Biblitoecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    //Definicição do teclado para aceitar teclado brasileiro
	
	setlocale(LC_ALL, "portuguese_brazil");

    //Declaração das variavéis

    float ki, chakra, haki;

    //Entrada de Dados dos usuários

    printf("Insira o valor do Ki: ");
    scanf("%f", &ki);
    printf("Insira o valor do Chakra: ");
    scanf("%f", &chakra);
    printf("Insira o valor do Haki: ");
    scanf("%f", &haki);

    // Validação se é possivel formar um triangulo retangulo com os valores digitados
    
    if((ki*ki) == ((haki*haki)+(chakra*chakra)))
        printf("E possivel formar um triangulo retangulo a partir dos valores digitados");
    else
        printf("Não é possivel formar o triangulo retangulo!");

    
        
	return 0;
}
