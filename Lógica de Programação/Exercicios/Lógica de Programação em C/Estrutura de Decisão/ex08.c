/*
8. Forma do Triângulo Saiyajin:

A partir de três valores que serão digitados, verifique se eles podem formar um triângulo. Em caso positivo, exiba sua classificação:

Isósceles, escaleno ou eqüilátero." Um triângulo escaleno tem todos os lados diferentes, o isósceles tem dois lados iguais, e o equilátero tem todos os lados iguais.
*/

// Importação de Biblitoecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    //Definicição do teclado para aceitar teclado brasileiro
	
	setlocale(LC_ALL, "portuguese_brazil");

    //Declaração das variavéis

    float l1, l2, l3;

    //Entrada de Dados dos usuários

    printf("Insira o valor do Lado 1: ");
    scanf("%f", &l1);
    printf("Insira o valor do Lado 2: ");
    scanf("%f", &l2);
    printf("Insira o valor do Lado 3: ");
    scanf("%f", &l3);

    // Validação se é possivel formar um triangulo com os valores digitados
    
    if((l1+l2 > l3) && (l1+l3 > l2) && (l2+l3 > l1)){

        // Classificação do Triangulo

        if((l1 != l2) && (l1 != l3) && (l2 !=l3))
            printf("Triangulo Escaleno");
        else if((l1 == l2) && (l1 == l3) && (l2 ==l3))
            printf("Triangulo Equilatero");
        else
            printf("Triangulo Isosceles");

    }else
        printf("Não é possivel formar o triangulo!");
    
        
	return 0;
}
