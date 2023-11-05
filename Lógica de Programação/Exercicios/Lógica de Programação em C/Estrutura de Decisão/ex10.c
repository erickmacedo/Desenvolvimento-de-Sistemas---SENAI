/*
10. Entrar com o "nível de energia" (medido em unidades de "Ki"), o "tipo de guerreiro" (Saiyan ou Namekuseijin), e a "altura do guerreiro" (em metros). Após a digitação, exibir se este guerreiro está ou não com seu "poder ideal". Veja a tabela da relação "nível de energia / (altura * altura)":
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
