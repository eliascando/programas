/*Esta es un programa que convierte de farenheit a celcius y visceversa*/
/*Elias Cando*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

main () {
	setlocale(LC_ALL, "spanish");
	float celcius, farenheit=0;
	int i, select;
	
	do
	{	
	system("cls");
	system("color f0");
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
			printf("\n");
			printf("\n");
			system("pause");
		break;
		
		case 2:
			printf("Ingrese Grados Farenheit: ");
			scanf ("%f",&farenheit);
			celcius = (farenheit - 32) / 1.8;
			printf("\n Es igual a: %.2f", celcius);
			printf("°C");
			printf("\n");
			printf("\n");
			system("pause");
		break;
		
		default:
			printf("\n Opción Incorrecta...");
			printf("\n");
			printf("\n");
			system("pause");
		}
				system("cls");
				printf("\n \n ***********************");
				printf("\n \n Desea volver a Convertir?...");
				printf("\n 1. SI");
				printf("\n 2. NO");
				printf("\n Opción: ");
				scanf ("%i",&i);
	} while (i == 1);	
	system("cls");
	printf("\n ****PROGRAMA FINALIZADO****");
	getch();
}
