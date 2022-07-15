/*Questo è il codice risultante con modifiche, correzioni e miglioramenti*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 31

/*Prototipi/Dichiarazioni delle funzioni da usare nel programma*/

void menu ();
void moltiplica ();
void dividi ();
int ins_string (char*);


int main ()     //Funzione principale

{
        /*Dichiarazione variabile*/
        char scelta = '\0';
	char* utente;
	int dim;

	utente=malloc(MAX*sizeof(char));	//Allocazione dinamica della memoria
  	if(utente==NULL)	//Controlla se la memoria viene allocata
  	{
    		printf("\nAllocazione del nome nella memoria fallita");
    		exit(0);
  	}

	do      //Inizio do while
        {
                menu ();        //Chimata alla funzione menu
                scanf(" %c", &scelta);

                switch(scelta)  //Inizio della switch
                {
                        case 'A':
                        moltiplica ();  //Primo caso chiamata alla funzione moltiplica
                        break;
                        case 'B':
                        dividi ();      //Secondo caso chiamata alla funzione dividi
                        break;
                        case 'C':
                        dim = ins_string (utente);  //Terzo caso chiamata alla funzione ins_string
			utente=realloc(utente, dim*sizeof(char));	//Reallochiamo la memoria con lo spazio necessario
  			if(utente==NULL)	//Controlla se la memoria viene allocata
			{
    				printf("\nAllocazione del nome nella memoria fallita");
    				exit(0);
  			}
                        break;
                        case 'D':
                        return 0;       //Uscita dal programma
                        default:
                        printf("\nValore inserito non valido! Riprovare\n");
                        break;  //Default in caso si inseriscano valori sbagliati
                }
        }while(scelta!='A' || scelta!='B' || scelta!='C');      //Condizione del ciclo
}

void menu ()    //Inizio funzione menu
{
        printf ("\nBenvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
        printf ("\nCome posso aiutarti?\n");
        printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\nD >> Uscire\n");

}

void moltiplica ()      //Inizio funzione moltiplica
{
        float  a, b = 0;
        printf ("\nInserisci i due numeri da moltiplicare: ");
        scanf ("%g", &a);
        scanf ("%g", &b);

	float prodotto = a * b; //Prodotto

        printf ("\nIl prodotto tra %g e %g e': %g\n", a,b,prodotto);
}

void dividi ()  //Inizio funzione dividi
{
        float  a,b = 0;
        printf ("\nInserisci il numeratore: ");
        scanf ("%g", &a);
        printf ("\nInserisci il denominatore: ");
        scanf ("%g", &b);

        if(b==0)        //Se il denominatore è uguale a 0 da errore e torna alla funzione divisione
        {
                printf("\nValore inserito non valido\n");
                dividi ();
        }
        else
        {
                float divisione = a / b;        //Divisione

                printf ("\nLa divisione tra %g e %g e': %g\n", a,b,divisione);
        }
}

int ins_string (char* str)      //Inizio funzione stringa
{
	int conta;

  	scanf("%s", &str);
  	conta=strlen(str)+1;
  	return conta;
}
