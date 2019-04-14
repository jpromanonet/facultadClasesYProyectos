#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
	{
		
	// Declara variables

		int dia;
	
	// Parametros de usuario
	
		printf("Numero del 1 al 7(inclusive)? \n");
		scanf("%d", &dia);
	
	// Logica del programa

		switch(dia)
			{
				
				case 1:
					printf("Domingo");
					break;
				
				case 2:
					printf("Lunes");
					break;
				
				case 3:
					printf("Martes");
					break;
				
				case 4:
					printf("Miercoles");
					break;
			
				case 5:
					printf("Jueves");
					break;		
				
				case 6:
					printf("Viernes");
					break;
				
				case 7:
					printf("Sabado");
					break;
					
				default:
					printf("No ingresaste un numero del 1 al 7!");
					break;
			
			}	
		
	return 0;
	
	}
