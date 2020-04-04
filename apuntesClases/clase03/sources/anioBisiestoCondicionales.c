#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
	{
		
	// Declara variables

		int year;
	
	// Parametros de usuario
	
		printf("Introduce un anio: \n");
		scanf("%d", &year);
		
	// Logica del programa
	
		if (year % 4 == 0) 
			{
				printf("Es un anio bisiesto \n");
				return 0;
			}
		if (year % 100 == 0) 
			{
				printf("Es un anio bisiesto \n");
			}
		else 
			{
				printf("No es un año bisiesto \n");
			}
	
	// Espera
	system("pause");
	
	}
