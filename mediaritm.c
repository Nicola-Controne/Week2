#include <stdio.h>

int main()
{
	float num1, num2;	/*Dichiarazione variabili*/
	float media;

	printf("\nInserire il primo numero intero: ");	/*Richiesta all'utente*/
	scanf("%f", &num1);
	printf("\n\nInserire il secondo numero intero: ");
	scanf("%f", &num2);

	media=(num1+num2)/2;	/*Media aritmetica*/

	printf("\n\nLa media tra i due numeri e\': %5.1f ", media);	/*Stampa del risultato*/

	return 0;
}
