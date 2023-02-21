#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Autor: Joice de Jesus dos Santos
* Este programa recebe o ângulo, a distancia percorrida em metros pelo foquete e mostra a altura que o foquete se encontra.
*/
void main(){
		//declaração de variáveis
		int angulo;
		float distancia,pi = 3.14,seno,radianos,altura;

		//entrada de dados
		printf("Informe o ângulo: ");
		scanf("%i",&angulo);

		printf("Informe a distância percorrida pelo foquete: ");
		scanf("%f",&distancia);

		//computação
		radianos = (angulo *  pi) / 180;
		seno = sin(radianos);
		altura = distancia * seno;
		
		printf("Altura que o foquete percorreu = %f",altura);
		
	}
