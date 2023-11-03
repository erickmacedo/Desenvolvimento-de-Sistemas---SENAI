/*
13. Velocidade Final na Corrida de Namek

Entre via teclado com a velocidade inicial em Namekianos por segundo (m/s), a aceleração (m/s²) e o tempo de percurso (em segundos). Calcule e exiba a velocidade final em km/h, considerando que 1 m/s é equivalente a 3.6 km/h. A velocidade final é vital em uma corrida de Namekianos.
*/

// Importação de Biblitoecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    //Definicição do teclado para aceitar caracters especiais
	
	setlocale(LC_ALL, "Portuguese");

    //Declaração das variavéis
	
    float vInicial, aceleracao, tempPercuso;

    //Entrada de Dados dos usuários

    printf("Insira o valor da velocidade incial em m/s: ");
    scanf("%f", &vInicial);

    printf("Insira o valor da aceleracao em m/s²: ");
    scanf("%f", &aceleracao);

    printf("Insira o o tempo do percuso em segundos: ");
    scanf("%f", &tempPercuso);

    //Calculo da velocidade final
    
   fahrenheit = (32 + ((1.8) * celsius));

    // Exibição do Resultado na Tela

	printf("### O valor da tensao do circuito energetico eh de %.2f F", fahrenheit);
	
	return 0;
}
