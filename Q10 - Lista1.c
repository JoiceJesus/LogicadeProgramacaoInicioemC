#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Autor: Joice de Jesus dos Santos
* Este programa recebe o �ngulo, a distancia percorrida em metros pelo foquete e mostra a altura que o foquete se encontra.
*/
void main(){
		//declara��o de vari�veis
		int angulo;
		float distancia,pi = 3.14,seno,radianos,altura;

		//entrada de dados
		printf("Informe o �ngulo: ");
		scanf("%i",&angulo);

		printf("Informe a dist�ncia percorrida pelo foquete: ");
		scanf("%f",&distancia);

		//computa��o
		radianos = (angulo *  pi) / 180;
		seno = sin(radianos);
		altura = distancia * seno;
		
		printf("Altura que o foquete percorreu = %f",altura);
		
	}
