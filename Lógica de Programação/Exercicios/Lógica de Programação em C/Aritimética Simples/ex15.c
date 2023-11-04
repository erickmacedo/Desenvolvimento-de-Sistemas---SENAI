/*
15. Valor Total das Esferas de Dragão:

Entre via teclado com o valor de cinco Esferas de Dragão. Calcule e exiba o valor total das Esferas, que representa o potencial de realizar desejos. Em seguida, digite o valor de pagamento e exiba o troco, como se fosse a transação das Esferas de Dragão.

*/

// Importação de Biblitoecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    //Definicição do teclado para aceitar teclado brasileiro
	
	setlocale(LC_ALL, "Portuguese");

    //Declaração das variavéis

    float vEsfera[5], pagamento = 0, vPago = 0, vRestante = 0;

    //Entrada de Dados dos usuários

    for(int i = 0; i < 5; i++){ 

        printf("Insira o valor da Esfera %d: ", i+1);
        scanf("%f", &vEsfera[i]);

        // Calcular o valor total das 5 Esferas do Dragão

        pagamento += vEsfera[i];

    }

    // Guarda o valor de pagamento em uma variavel "auxiliar", para calculo de troco

    vRestante = pagamento;

    // Exibição do valor total a ser pago

	printf("### O valor total das esfera eh: R$ %.2f", pagamento);

    // Processamento do Pagamento
    
    while(vRestante > 0){

        // Entrada de Dados do Usuário
        printf("\nInsira o valor pago: ");
        scanf("%f", &vPago);
        
        //Calculo de pagamento
        vRestante = vRestante - vPago;
        
        //Validação de troco

        if(vRestante < 0)
            printf("Troco: R$ %f", vRestante*-1);
        else if(vRestante > 0)
            printf("Ainda faltam ser pago R$ %.2f", vRestante);

    }

    printf("TRANSAÇÃO FINALIZADA");
	
	return 0;
}
