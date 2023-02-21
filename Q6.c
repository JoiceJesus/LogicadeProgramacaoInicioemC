/* Autor: Joice de Jesus dos Santos
* Este programa recebe o primeiro termo de uma P.A.(a¹), a razão da P.A. e mostra qual o 
* n-ésimo termo da sequência.	
* 
*/
void main(){
		//declaração de variáveis
		int a1,r,n,an;
		//entrada de dados
		printf("\nInforme a¹ (o primeiro termo da P.A.) ");
		scanf("%i",&a1);

		printf("\nInforme r (a razão da P.A.) ");
		scanf("%i",&r);

		printf("\nInforme n (o n-ésimo termo da sequÊncia) ");
		scanf("%i",&n);
		//computação
		an = a1 + (n - 1) * r;

		//saida de dados
		printf("\n O %i° termo da P.A. é %i",n,an);
		
		printf("\nprecione qualquer tecla para encerrar...");
	}
