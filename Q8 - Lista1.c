#include<stdio.h>
#include<stdlib.h>

/* Autor: Joice de Jesus dos Santos
* Este programa recebe os segundos e mostra as hh:mm:ss
*/
void main(){
	
		//declara��o de vari�veis
		int s,h,segS,m,segSob;

		//entrada de dados
		printf("\nInforme os sengundos: ");
		scanf("%i",&s);

		//computa��o
		h = s / 3600;
		segS = s % 3600;
		m = segS / 60;
		segSob = segS % 60;

		//saida de informa��o
		printf("\n%ih: %im : %is",h,m,segSob);
		
		printf("\nprecione qualquer tecla para encerrar..."); getchar();
	}
