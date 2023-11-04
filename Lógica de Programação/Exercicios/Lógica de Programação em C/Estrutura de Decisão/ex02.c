/*
2. Os Lados do Ringue

Entre com dois valores distintos e exiba o mais fraco.
*/

// Importação de Biblitoecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    //Definicição do teclado para aceitar teclado brasileiro
	
	setlocale(LC_ALL, "portuguese_brazil");

    //Declaração das variavéis

    float a, b;

    //Entrada de Dados dos usuários

    printf("Insira o valor do lado A: ");
    scanf("%f", &a);
    printf("Insira o valor do lado B: ");
    scanf("%f", &b);

    // Análise para verificar qual dos dois ladso é mais o mais fraco
    if(a > b)
        printf("O lado B é o mais fraco");
    else if(b > a)
        printf("O lado A é o mais fraco");
    else
        printf("Os lados são iguais!");
        
	return 0;
}
