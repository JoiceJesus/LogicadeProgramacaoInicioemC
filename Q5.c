#include<stdio.h>
#include<stdlib.h>
	/* Autor: Joice de Jesus dos Santos
	 * Este programa recebe o numero de socios, investimento inicial de um dos socios, quanto recebeu um dos socios e mostra
	 * quanto o outro socio recebel, qual foi o lucro da empresa.
	 * 
	 */
void main(){
		
		//declaração de variáveis
		int nsocios;
		float Iinicial,Valor_recebeuS,valor_investidoS,valorCadaIS,IoutroS,Vrecebel_outroS,lucroE;

		//entrada de dados
		printf("Informe o numero de socios: ");
		scanf("%i",&nsocios);

		printf("Informe o investimento inicial de um dos socios: ");
		scanf("%f",&Iinicial);

		printf("Informe quanto recebel um dos socios: ");
		scanf("%f",&Valor_recebeuS);

		//computaçãp
		valor_investidoS = Iinicial * 100;
		valorCadaIS /* valor a cada investimento*/ = Valor_recebeuS / valor_investidoS;
		IoutroS = 100 - valor_investidoS;
		Vrecebel_outroS = valorCadaIS * IoutroS;
		lucroE = Valor_recebeuS + Vrecebel_outroS;
		//saida de informação
		printf("O outro socio recebel = ",Vrecebel_outroS);
	printf("\nO lucro da empresa foi = ",lucroE);
	
	printf("precione qualquer tecla para encerrar ..."); getchar();
	}
