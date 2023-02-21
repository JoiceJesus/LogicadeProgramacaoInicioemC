#include<stdio.h>
#include<stdlib.h>

/* Autor: Joice de Jesus dos Santos
* Este programa recebe a distância em km, o preço da gasolina, quantos km/l o carro faz e mostra quantos
* litros de gasolina um carro irá consumi, quanto será gasto em reais.
*/
void main(){
		//declaração de variáveis
		float distanciakm,pGasolina,kmL,Lgastos,gastoP;

		//entrada de dados
		printf("\nInforme a distancia em km: ");
		scanf("%f",&distanciakm);

		printf("\nInforme o preço da gasolina (R$): ");
		scanf("%f",&pGasolina);

		printf("\nInforme quantos km/l o carro faz: ");
		scanf("%f",&kmL);

		//computação
		Lgastos = distanciakm / kmL;
		gastoP = pGasolina * Lgastos;

		printf("\nO carro vai consumi = %f Litros",Lgastos);
		printf("\nValor gasto = %f Reais",gastoP);
		
		printf("\nprecione qualquer tecla para encerrar..."); getchar();
	}
	
