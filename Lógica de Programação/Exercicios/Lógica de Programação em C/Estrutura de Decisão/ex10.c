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

    float energia, altura, relacao;
    char guerreiro;

    //Entrada de Dados dos usuários

    printf("Insira o valor da energia do Guerreiro: ");
    scanf("%f", &energia);
    printf("Insira o valor da altura do guerreiro: ");
    scanf("%f", &altura);
    printf("Insira o tipo do guerreiro: (S - Saiyan / N - Namekusejin)");
    scanf(" %c", &guerreiro);
    

    // Validar entrada da variavel tipo de guerreiro
    
    while(guerreiro != 'S' && guerreiro != 'N'){
        printf("\nPor favor insira corretamente o tipo de guerreiro, lembrando que é S para Saiyan e N para Namekusejin: ");        
        scanf(" %c", &guerreiro);
    }

    // Calcular relação entre o nivel de energia e altura

    relacao = (energia / (altura * altura));

    printf("\n Relação: %f\n", relacao);

    // Exibe na tela se o guerreiro está com o poder ideal

    if(guerreiro == 'S'){
        if(relacao < 19)
            printf("Abaixo do nível de poder ideal de um Saiyan");
        else if(relacao <= 19 && relacao < 24)
            printf("Está no nível de poder ideal de um Saiyan");
        else
            printf("Acima do nível de poder ideal de um Saiyan");
    }
    else if(guerreiro == 'N'){
        if(relacao < 20)
            printf("Abaixo do nível de poder ideal de um Namekuseijin");
        else if(relacao <= 20 && relacao < 25)
            printf("Está no nível de poder ideal de um Namekuseijin");
        else
            printf("Acima do nível de poder ideal de um Namekuseijin");
    }
        
	return 0;
}
