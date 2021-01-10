/*Esta es un programa que convierte de farenheit a celcius y visceversa*/
/*Elias Cando*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "spanish");
	float celcius, farenheit=0;
	int i, select;
	
	do
	{	
	fflush(stdin);
	printf("\n ****Convertidor de temperatura**** ");
	printf("\n 1. Celcius a Farenheit.");
	printf("\n 2. Farenheit a Celcius.");
	printf("\n Elija opcion: ");
	scanf ("%i",&select);
		switch (select)
		{
		case 1:
			printf("Ingrese Grados Celcius: ");
			scanf ("%f",&celcius);
			farenheit = (celcius * 1.8) + 32;
			printf("\n Es igual a: %.2f", farenheit);
			printf("°F");
		break;
		
		case 2:
			printf("Ingrese Grados Farenheit: ");
			scanf ("%f",&farenheit);
			celcius = (farenheit - 32) / 1.8;
			printf("\n Es igual a: %.2f", celcius);
			printf("°C");
		break;
		
		default:
			printf("\n Opción Incorrecta...");
		}
				printf("\n \n ***********************");
				printf("\n \n Desea volver a Convertir?...");
				printf("\n 1. SI");
				printf("\n 2. NO");
				printf("\n Opción: ");
				scanf ("%i",&i);
	} while (i == 1);	
	printf("\n ****PROGRAMA FINALIZADO****");
	
	getch();
}
