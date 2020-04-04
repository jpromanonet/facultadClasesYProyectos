#include <stdio.h>
#include <stdlib.h>

int main(void)
	{
		// Define variables
		
		int opcion;
		
		// User parameters
		
		printf("Selecciona una opcion: \n");
		printf("1 --- Archivo\n");
		printf("2 --- Buscar\n");
		printf("3 --- Salir\n");
		
		scanf("%d", &opcion);
		
		// Program logic
		
		if(opcion!=1 && opcion!=2 && opcion!=3)
			{
				printf("La opcion NO es correcta \n");
			}
		else
			{
				printf("La opcion es correcta \n");
			}
	}
