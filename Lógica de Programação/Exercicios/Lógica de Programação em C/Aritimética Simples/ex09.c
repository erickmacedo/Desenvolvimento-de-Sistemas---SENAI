/*
9. Média Aritmética de Quatro Ki:

Entre via teclado com quatro valores quaisquer. Calcule e exiba a média aritmética, que representa a harmonia entre diferentes formas de Ki.
*/

// Importação de Biblitoecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    //Definicição do teclado para aceitar teclado brasileiro
	
	setlocale(LC_ALL, "Portuguese");

    //Declaração das variavéis
	
    float valor[4], parcial = 0, media; 
    /*o invés de criar uma váriavel para cada valor foi criada um vetor (valor [4]) contendo 4 espaços*/

    //Entrada de Dados dos usuários

    for(int i = 0; i < 4; i++){
        printf("Insira um valor: ");
        scanf("%f", &valor[i]);
        parcial+= valor[i];
    }

    //Calculo do Volume da do Cone Namekusei
    media = parcial/4;

    // Exibição do Resultado na Tela

	printf("### O valor da harmonia entre as diferentes formas de Ki eh de %f", media);
	
	return 0;
}
