#include <stdio.h>
//#include <stdlib.h>

/* Autor: Joice de Jesus dos Santos
 * Este programa recebe o numero de pessoas entrevistadas, numero de Pessoas que pagam apenas com dinheiro, 
 * numero de pessoas que pagqm apenas com cart�o e mostra o total de pessoas que utiliza duas formas de pagamento.
 */
	 
void main(){
	
		//declara��o de vari�veis
		int entrevistados,dinheiro,cartao,dinheiro_e_cartao,pagam_1forma,pagam_2formas;
		printf("\n\t\t\t\tProblema 1\n");
		//entrada de dados
		printf("\nInforme o numero de entrevistados: ");
		scanf("%i",&entrevistados);

		printf("\nInforme o numero de pessoas que compr�o apenas com dinheiro");
		scanf("%i",&dinheiro);

		printf("\nInforme o numero de pessoas que compr�o apenas com cart�o");
		scanf("%i",&cartao);

		//computa��o
		pagam_1forma = dinheiro + cartao;
		pagam_2formas = entrevistados - pagam_1forma;

		//saida de dados
		printf("\nTotal de pessoas que pagam de 2 formas = %i",pagam_2formas);
		
		printf("\nprecione qualquer tecla para encerrar"); getchar();
	}
