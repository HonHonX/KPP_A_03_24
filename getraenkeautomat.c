#include<stdio.h>

int main () {

	/*
	* 	Diese Programm soll einen Getraenkeautomaten simulieren.
	*/

	//Variablen
	int wahlgetraenk;
	float warenwert,geldstueck; 

	printf("\n ************************************* ");
	printf("\n *   ^,,,,^   *                      * ");
	printf("\n *  ( o x o)  * Getränkeautomat v0.2 * ");
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

	//Zahlungsaufforderung
	if (wahlgetraenk>=1 && wahlgetraenk<=3) {
		switch (wahlgetraenk) {
			case 1: warenwert=0.50;
			break;
			case 2: warenwert=1.00;
			break;
			case 3: warenwert=2.00;
			break;
		}

		//Aufforderung zum Geldeinwurf
		printf("\nBitte werfen Sie für Getraenk [%d] folgende Muenze ein: %.2f€", wahlgetraenk, warenwert);
		printf("\nIhr Einwurf [in €] : ");
		scanf("%f",&geldstueck);
		
		//Abgleich der Zahlung
		if (geldstueck==warenwert) {
			printf("\nVielen Dank. Bitte entnehmen Sie Ihr Getraenk.");
		} else {
			printf("\nLeider haben Sie nicht das passende Geldstueck eingeworfen.");
		}

	} else {
		printf("\nIhre Wahl war leider ungültig.Vorgang abgebrochen.");
	}

	//Ende
	printf("\n\n");
	return 0;
}
