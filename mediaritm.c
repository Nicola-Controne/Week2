#include <stdio.h>

int main()
{
	int num1, num2;	/*Dichiarazione variabili*/
	float media;

	printf("\nInserire il primo numero intero: ");	/*Richiesta all'utente*/
	scanf("%d", &num1);
	printf("\n\nInserire il secondo numero intero: ");
	scanf("%d", &num2);

	media=(num1+num2)/2;	/*Media aritmetica*/

	printf("\n\nLa media tra i due numeri e\': %f ", media);	/*Stampa del risultato*/

	return 0;
}
