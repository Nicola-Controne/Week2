#include <stdio.h>

int main()
{
	int num;	/*Dichiarazione variabile*/

	printf("\nInserire un numero intero: ");	/*Richiesta all'utente*/
	scanf("%d", &num);

	if(num>=0)	/*Varie condizioni a seconda dell'input inserito con stampa inclusa*/
	{
		printf("\n\nIl numero inserito e\' positivo");
	}
	if(num<0)
	{
		printf("\n\nIl numero inserito e\' negativo");
	}
	/*if(num==0)		Ipotiziamo lo 0 positivo
	{
		printf("\n\nIl numero inserito e\' neutro");
	}*/

	return 0;	/*Fine programma*/
}
