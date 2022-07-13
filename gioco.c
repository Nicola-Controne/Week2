/*Inclusione delle librerie*/

#include <stdio.h>
#include <stdlib.h>

/*Inizio della funzione main*/

int main()
{

/*Dichiarazione delle variabili*/

	int scelta;
	char utente[21];
	int conta=0, x=0, y=0, z=0;

/*Presentazione del gioco*/

	printf("\nBenvenuti al QuizGame\n");
	printf("\nLo scopo del gioco e\' rispondere correttamente al maggior numero di domande\n");

/*Inizio del do while*/

	do
	{

/*Inserimento delle opzioni di scelta*/

	printf("\nSelezionare l\'opzione 1 per iniziare la partita\n");
	printf("\nSelezionare l\'opzione 2 per uscire dal gioco\n");

	scanf("%d", &scelta);

/*Utilizzo della switch*/

	switch(scelta)
	{
		case 1:
		printf("\nScegliere il nome dell\'utente:\n");
		scanf("%s", &utente);

		printf("\nDove si trova la Tour Eiffel?\n");
		printf("\n1)Roma\n");
		printf("\n2)Parigi\n");
		printf("\n3)Londra\n");
		scanf("%d", &x);
		if(x==2)
		{
			conta++;
		}

		printf("\nChi ha vinto i mondiali di calcio nel 2006?\n");
		printf("\n1)Italia\n");
		printf("\n2)Germania\n");
		printf("\n3)Brasile\n");
		scanf("%d", &y);
		if(y==1)
		{
			conta++;
		}

		printf("\nChi e\' il CEO di Tesla?\n");
		printf("\n1)Bill Gates\n");
		printf("\n2)Mark Zukenberg\n");
		printf("\n3)Elon Musk\n");
		scanf("%d", &z);
		if(z==3)
		{
			conta++;
		}
		printf("\nIl punteggio di %s e\' %d", utente, conta);
		break;
		case 2:
		break;
	}
	}while(scelta==1);
	return 0;
}
