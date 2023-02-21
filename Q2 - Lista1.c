#include<stdio.h>
/* Autor: Joice de Jesus dos Santos
* Este programa recebe o valor da divida, porcentagem paga, parcelas restantes e mostra o valor a ser pogo em cada parcela.
*/
void main()	{
		//declaração de variáveis
		int parcela;
		float vdivida,porcentagem,vpago_divida,resta_divida,vparcelas;
		printf("\n\t\t\t\tProblema 2\n");
		//entrada de dados
		printf("\nInforme o valor da divida: ");
		scanf("%f",&vdivida);

		printf("\n a porcentagem paga: ");
		scanf("%f",&porcentagem);

		printf("\nInforme a quantidade de parcelas restantes: ");
		scanf("%i",&parcela);

		//computação
		vpago_divida = (vdivida * porcentagem)/100;
		resta_divida = vdivida - vpago_divida;
		vparcelas = resta_divida / parcela;
		
		//Saída de dados
		printf("\nValor de cada parcela = %6.2f ",vparcelas);
		
		printf("\nprecione qualquer tecla para encerrar");getchar();
	}
