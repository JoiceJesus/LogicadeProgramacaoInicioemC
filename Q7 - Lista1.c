#include<stdio.h>
#include<stdlib.h>

/* Autor: Joice de Jesus dos Santos
* Este programa recebe a dist�ncia em km, o pre�o da gasolina, quantos km/l o carro faz e mostra quantos
* litros de gasolina um carro ir� consumi, quanto ser� gasto em reais.
*/
void main(){
		//declara��o de vari�veis
		float distanciakm,pGasolina,kmL,Lgastos,gastoP;

		//entrada de dados
		printf("\nInforme a distancia em km: ");
		scanf("%f",&distanciakm);

		printf("\nInforme o pre�o da gasolina (R$): ");
		scanf("%f",&pGasolina);

		printf("\nInforme quantos km/l o carro faz: ");
		scanf("%f",&kmL);

		//computa��o
		Lgastos = distanciakm / kmL;
		gastoP = pGasolina * Lgastos;

		printf("\nO carro vai consumi = %f Litros",Lgastos);
		printf("\nValor gasto = %f Reais",gastoP);
		
		printf("\nprecione qualquer tecla para encerrar..."); getchar();
	}
	
