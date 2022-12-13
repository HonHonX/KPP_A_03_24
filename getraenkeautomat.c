#include<stdio.h>

int main () {

	/*
	* Diese Programm soll einen Getraenkeautomaten simulieren.
	*/

	//Variablen
	int wahlgetraenk,anzahl=0;
	float warenwert,geldstueck,restbetrag; 

	printf("\n ************************************* ");
	printf("\n *   ^,,,,^   *                      * ");
	printf("\n *  ( o x o)  * Getränkeautomat v0.3 * ");
	printf("\n *  ( 7   7)  *                      * ");
	printf("\n *   ´´´´´´   *              ©S.Buch * ");
	printf("\n ************************************* \n");
	
	//Getränkeauswahl
	printf("\nBitte waehlen Sie ihr Getraenk aus:\n");
 	printf("\n[1] Wasser (0.50€)");	
 	printf("\n[2] Limonade (1.00€)");	
 	printf("\n[3] Bier (2.00€)");	
	printf("\n\nBitte geben Sie 1,2 oder 3 für ihr gewünschtes Getränk ein: ");
	scanf("%d",&wahlgetraenk);
	
	//Bezahlvorgang
	if (wahlgetraenk>=1 && wahlgetraenk<=3) {
		switch (wahlgetraenk) {
			case 1: warenwert=anzahl*0.50;
			break;
			case 2: warenwert=anzahl*1.00;
			break;
			case 3: warenwert=anzahl*2.00;
			break;
		}	
		
		//Eine Mengenauswahl erfolgt nur dann, wenn ein gültiges Getränk ausgewählt wurde
		printf("\n\nBitte geben Sie die gewünschte Menge ein: ");
		scanf("%d",&anzahl);
		printf("\nWarenwert: %f",warenwert);
		
		//Bei der Menge 0 passiert nichts weiter, sonst wird zur Zahlung aufgefordert
		if (anzahl!=0) {
			
			printf("\n\n--- Bezahlvorgang ---");

			restbetrag = warenwert;
			while (restbetrag > 0 && restbetrag<=warenwert) {
				printf("\nEs fehlen noch %.2f Euro.\nBitte werfen Sie ein Geldstueck ein oder drücken Sie die 0 um den Vorgang abzubrechen: ",warenwert);
				scanf("%f",&geldstueck);
				if (geldstueck==0) 
					break;
				else 
					restbetrag-=geldstueck;
			}	
		
			//Getränkeausgabe
			printf("\n\n--- Getränkeausgabe ---");
			for (int i=1; i<=anzahl; i++) 
				printf("\nFlasche %d von %d wurde ausgegeben", i, anzahl);
		
			//Abgleich der Zahlung
			if (restbetrag==0) 
				printf("\nVielen Dank. Bitte entnehmen Sie Ihr(e) Getraenk(e).");
			else 
				printf("\n\nSie haben zu viel eingeworfen. Bitte entnehmen Sie Ihr(e) Getränk(e) und den Restbetrag von %.2f€", restbetrag*(-1));
		} else
			printf("\nSie haben die 0 gewählt.Vorgang abgebrochen.Bis bald");
			
	} else 
		printf("\nIhre Wahl war leider ungültig.Vorgang abgebrochen.Bis bald");

	//Ende
	printf("\n\n");
	return 0;
}
