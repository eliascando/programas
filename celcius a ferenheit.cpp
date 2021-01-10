/*Esta es un programa que convierte de farenheit a celcius y visceversa*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "spanish");
	int select, celcius, farenheit=0;
	int cont=1;
	printf("\n ****Convertidor de temperatura**** ");
	printf("\n 1. Celcius a Farenheit.");
	printf("\n 2. Farenheit a Celcius.");
	printf("\n Eliga opcion: ");
	scanf ("%i",&select);
	switch (select){
		case 1:
			printf("Ingrese Grados Celcius: ");
			scanf ("%i",&celcius);
			farenheit = (celcius * 1.8) + 32;
			printf("\n Es igual a: %i", farenheit);
			printf("°F");
			break;
		case 2:
			printf("Ingrese Grados Farenheit: ");
			scanf ("%i",&farenheit);
			celcius = (farenheit - 32) / 1.8;
			printf("\n Es igual a: %i", celcius);
			printf("°C");
			break;
		default:
			printf("\n Opcion Incorrecta...");
	}
	getch();
}
