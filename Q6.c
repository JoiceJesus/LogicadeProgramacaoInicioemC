/* Autor: Joice de Jesus dos Santos
* Este programa recebe o primeiro termo de uma P.A.(a�), a raz�o da P.A. e mostra qual o 
* n-�simo termo da sequ�ncia.	
* 
*/
void main(){
		//declara��o de vari�veis
		int a1,r,n,an;
		//entrada de dados
		printf("\nInforme a� (o primeiro termo da P.A.) ");
		scanf("%i",&a1);

		printf("\nInforme r (a raz�o da P.A.) ");
		scanf("%i",&r);

		printf("\nInforme n (o n-�simo termo da sequ�ncia) ");
		scanf("%i",&n);
		//computa��o
		an = a1 + (n - 1) * r;

		//saida de dados
		printf("\n O %i� termo da P.A. � %i",n,an);
		
		printf("\nprecione qualquer tecla para encerrar...");
	}
