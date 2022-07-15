/*Questo è il codice risultante con modifiche, correzioni e miglioramenti*/

#include <stdio.h>

/*Prototipi/Dichiarazioni delle funzioni da usare nel programma*/

void menu ();
void moltiplica ();
void dividi ();
void ins_string ();


int main ()	//Funzione principale

{
	/*Dichiarazione variabile*/
	char scelta = '\0';
	do	//Inizio do while
	{
		menu ();	//Chimata alla funzione menu
		scanf(" %c", &scelta);

		switch(scelta)	//Inizio della switch
		{
			case 'A':
			moltiplica ();	//Primo caso chiamata alla funzione moltiplica
			break;
			case 'B':
                	dividi ();	//Secondo caso chiamata alla funzione dividi
                	break;
			case 'C':
                	ins_string ();	//Terzo caso chiamata alla funzione ins_string
                	break;
			case 'D':
			return 0;	//Uscita dal programma
			default:
			printf("\nValore inserito non valido! Riprovare\n");
			break;	//Default in caso si inseriscano valori sbagliati
		}
	}while(scelta!='A' || scelta!='B' || scelta!='C');	//Condizione del ciclo
}

void menu ()	//Inizio funzione menu
{
	printf ("\nBenvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("\nCome posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\nD >> Uscire\n");

}

void moltiplica ()	//Inizio funzione moltiplica
{
	float  a, b = 0;
	printf ("\nInserisci i due numeri da moltiplicare: ");
	scanf ("%g", &a);
	scanf ("%g", &b);

	float prodotto = a * b; //Prodotto

	printf ("\nIl prodotto tra %g e %g e': %g\n", a,b,prodotto);
}

void dividi ()	//Inizio funzione dividi
{
        float  a,b = 0;
        printf ("\nInserisci il numeratore: ");
        scanf ("%g", &a);
	printf ("\nInserisci il denominatore: ");
        scanf ("%g", &b);

	if(b==0)	//Se il denominatore è uguale a 0 da errore e torna alla funzione divisione
	{
		printf("\nValore inserito non valido\n");
		dividi ();
	}
	else
	{
       		float divisione = a / b;	//Divisione

		printf ("\nLa divisione tra %g e %g e': %g\n", a,b,divisione);
	}
}

void ins_string ()	//Inizio funzione stringa
{
	char stringa[16];
        printf ("\nInserisci la stringa di massimo 15 caratteri: ");
        scanf("%s", &stringa);
}
/*Avrei modificato la stringa utilizzando allocazione dinamica, puntatori e funzione malloc e realloc
ma ho mantenuto tutto uguale dato che non sono state spigate queste cose*/


/*Codice con il solo controllo della sintassi*/

/*#include <stdio.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string ();


int main ()

{
	char scelta = '\0';
	menu ();
	scanf ("%c", &scelta);

	switch(scelta)
	{
		case 'A':
		moltiplica ();
		break;
		case 'B':
                dividi ();
                break;
		case 'C':
                ins_string ();
                break;
	}

return 0;

}


void menu ()
{
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");

}


void moltiplica ()
{
	short int  a,b = 0;
	printf ("Inserisci i due numeri da moltiplicare:");
	scanf ("%d", &a);
	scanf ("%d", &b);

	short int prodotto = a * b;

	printf ("Il prodotto tra %d e %d e': %d", a,b,prodotto);
}


void dividi ()
{
        int  a,b = 0;
        printf ("Inserisci il numeratore:");
        scanf ("%d", &a);
	printf ("Inserisci il denumeratore:");
        scanf ("%d", &b);

        int divisione = a / b;

        printf ("La divisione tra %d e %d e': %d", a,b,divisione);
}





void ins_string ()
{
	char stringa[10];
        printf ("Inserisci la stringa:");
        scanf ("%s", &stringa);
}
*/


/*Codice originale con errori*/
/*
#include <stdio.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main ()

{
	char scelta = {'\0'};
	menu ();
	scanf ("%d", &scelta);

	switch (scelta)
	{
		case 'A':
		moltiplica();
		break;
		case 'B':
                dividi();
                break;
		case 'C':
                ins_string();
                break;
	}

return 0;

}


void menu ()
{
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");

}


void moltiplica ()
{
	short int  a,b = 0;
	printf ("Inserisci i due numeri da moltiplicare:");
	scanf ("%f", &a);
	scanf ("%d", &b);

	short int prodotto = a * b;

	printf ("Il prodotto tra %d e %d e': %d", a,b,prodotto);
}


void dividi ()
{
        int  a,b = 0;
        printf ("Inserisci il numeratore:");
        scanf ("%d", &a);
	printf ("Inserisci il denumeratore:");
        scanf ("%d", &b);

        int divisione = a % b;

        printf ("La divisione tra %d e %d e': %d", a,b,divisione);
}





void ins_string ()
{
	char stringa[10];
        printf ("Inserisci la stringa:");
        scanf ("%s", &stringa);
}
*/
