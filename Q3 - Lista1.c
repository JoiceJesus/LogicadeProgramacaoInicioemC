#include<stdio.h>
#include <stdlib.h>

/* Autor: Joice de Jesus dos Santos
* Este programa recebe a capacidade do tanque de um automovel, litros gastos por km e mostra 
* quantos km o automovel pode roda sem encher o tanque
*/
void main(){
	
		//declaração de variáveis
		float capacidade,litroKm,km100_encher;
		printf("\n\t\t\t\tProblema 3\n");
		//entrada de dados
		printf("\nInforme qual a capacidade do tanque do automovel:");
		scanf("%f",&capacidade);

		printf("\nInforme os litros gastos por Km: ");
		scanf("%f",&litroKm);

		//computação
		km100_encher = capacidade / litroKm;

		//Saída de dados
		printf("\nTotal de Km a serem percorridos sem encher o tanque = %3.2f",km100_encher);
		
		printf("\nprecione qualquer tecla para encerrar"); getchar();
	}
