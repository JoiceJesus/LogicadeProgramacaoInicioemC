#include<stdio.h>
#include<stdlib.h>

/* Autor: Joice de Jesus dos Santos
* Este programa recebe a quantidade de moradores femininos de um edificio, o total de mulheres a cada 8 moradores e mostra o 
* número de moradores do sexo masculino
*/
void main(){

		//declaração de variaveis
		int q_femininos,tmulheres_cada8m,homensCada8,GCada3M,HCada8M;
		printf("\n\t\t\t\tProblema n 4\n");
		//entrada de dados
		printf("\nInforme a quantidade de mulheres que moram no edificio: ");
		scanf("%i",&q_femininos);

		printf("\nInforme a quantidade de mulheres a cada 8 moradores: ");
		scanf("%i",&tmulheres_cada8m);

		//computação
		homensCada8 = 8 - tmulheres_cada8m;
		GCada3M = q_femininos / 3;
		HCada8M = homensCada8 * GCada3M;

		//saida de informação
		printf("\nO número de moradores do sexo masculino = %i",HCada8M);
		
		printf("\nprecione qualquer tecla para encerrar..."); getchar();
		
	}
