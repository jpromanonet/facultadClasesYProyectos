#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
	{
	
	// Declara variables
	
		int edad;
		
	// Parametros del usuario
	
	printf("Edad? \n");
	scanf("%d", &edad);
		
		
	// Logica del programa
	
		if (edad >= 18) 
			{
				printf("Mayor de edad");
			} 
		else if(edad < 18) 
			{
				printf("Menor de edad");
			}
	
		
	return 0;
	
	}
