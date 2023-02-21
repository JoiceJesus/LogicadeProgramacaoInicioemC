#include<stdio.h>
#include<stdlib.h>

/* Autor: Joice de Jesus dos Santos
* Este programa recebe os segundos e mostra as hh:mm:ss
*/
void main(){
	
		//declaração de variáveis
		int s,h,segS,m,segSob;

		//entrada de dados
		printf("\nInforme os sengundos: ");
		scanf("%i",&s);

		//computação
		h = s / 3600;
		segS = s % 3600;
		m = segS / 60;
		segSob = segS % 60;

		//saida de informação
		printf("\n%ih: %im : %is",h,m,segSob);
		
		printf("\nprecione qualquer tecla para encerrar..."); getchar();
	}
