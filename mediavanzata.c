#include <stdio.h>

int main()
{
	float media;				/*Dichiarazione delle variabili*/
	int num, somma=0, conta=-1;		/*Conta parte da -1 perché nel do while viene contato anche l'incremento 
						dello 0 che è un carattere di uscita*/

	do
	{
		printf("\nInserire un numero intero o lo 0 per terminare l\'inserimento: ");	/*Richiesta all'utente*/
		scanf("%f", &num);

		somma=somma+num;	/*Usiamo una variabile somma per sommare tutti i numeri inseriti*/

		conta++;		/*Incrementiamo l'inserimento per effettuare la media successivamente*/

	}while(num!=0);			/*Condizione del ciclo*/

	media=somma/conta;		/*Media dei numeri inseriti*/

	printf("\n\nLa media dei numeri inseriti e\': %5.2f");		/*Stampa del risultato*/

	return 0;
}
