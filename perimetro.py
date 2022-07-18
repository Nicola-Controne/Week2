def perimetro():	#Il def definisce una funzione e ci permette di utilizzarla, va dichiarata all'inizio
	print("Il programma calcola il perimetro di una figura geometrica")
	print("""
	-Quadrato >> 1
	-Rettangolo >> 2
	-Cerchio >> 3
	-Triangolo >> 4""")

	print("Inserisce la scelta")	#Il comando print stampa a schermo quello che scriviamo
	scelta=int(input(">>>")

	if (scelta==1):	#Inizio dell'if e dell'elif che sono un semplice susseguirsi di if e condizioni
		print("Hai selezionato il perimetro del quadrato")
		lato=float(input("Inserisci il valore del lato del quadrato: "))
		print("Il valore del perimetro del quadrato, avente lato", lato, "è: ", lato*4)
	elif (scelta==2):
		print("Hai selezionato il perimetro del rettangolo")
		base=float(input("Inserisci il valore della base: "))
		altezza=float(input("Inserisci il valore dell'altezza: "))
		print("Il valore del rettangolo avente base ",base,"e altezza ",altezza,"e: ",(base+altezza)*2)
	elif (scelta==3):
		print("Hai scelto il perimetro del cerchio")
		diametro=float(input("Inserisci il diametro del cerchio ")
		print("Il valore del perimetro avente diametro ",diametro,"è: ",3.14*diametro)
	elif (scelta==4):
		print("Hai selezionato il triangolo")
		lato1=float(input("Inserisci la base del triangolo: "))
		print("Il perimetro del triangolo di base ",base,"è: ",base*3)
	else:
		print("Inserisci una scelta valida")
perimetro()
#Calcolo negli if e elif i perimetri delle varie forme geometriche e richiamo alla fine del codice la funzione perimetro per farla ripartire
#Presto attenzione all'indentazione che è cruciale in Python
