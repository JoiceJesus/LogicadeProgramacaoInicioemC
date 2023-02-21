#include<stdio.h>
#include<stdlib.h>

/* Autor: Joice de Jesus dos Santos
* Este programa recebe o lado do triÂngulo equilatero e mostra a sua altura
*/
void main(){
		//declaração de variáveis
		float lado,altura;

		//entrada de dados
		printf("\nInforme o lado do triângulo: ");
		scanf("%f",&lado);

		//computação
		altura = (lado * / 1.7) / 2;

		//saida de informação
		printf("\nAltura do triângulo equilatero = %f",altura);
		
		printf("\nprecione qualquer tecla para encerrar..."); getchar();
		
	}
