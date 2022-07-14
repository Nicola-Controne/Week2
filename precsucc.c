#include <stdio.h>

int main()
{
	int num, prec, succ;	/*Dichiarazione delle variabili*/

	printf("\nInserire un numero intero: ");	/*Richiesta all'utente*/
	scanf("%d", &num);

	prec=num-1;	/*Decremento dell'intero inserito*/
	succ=num+1;	/*Incremento dell'intero inserito*/

	printf("\n\nIl numero precedente e\' %d mentre il successivo e\' %d\n", prec, succ);	/*Stampa dei valori*/

	return 0;
}


