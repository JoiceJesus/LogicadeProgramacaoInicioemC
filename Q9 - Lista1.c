#include<stdio.h>
#include<stdlib.h>

/* Autor: Joice de Jesus dos Santos
* Este programa recebe o lado do tri�ngulo equilatero e mostra a sua altura
*/
void main(){
		//declara��o de vari�veis
		float lado,altura;

		//entrada de dados
		printf("\nInforme o lado do tri�ngulo: ");
		scanf("%f",&lado);

		//computa��o
		altura = (lado * / 1.7) / 2;

		//saida de informa��o
		printf("\nAltura do tri�ngulo equilatero = %f",altura);
		
		printf("\nprecione qualquer tecla para encerrar..."); getchar();
		
	}
