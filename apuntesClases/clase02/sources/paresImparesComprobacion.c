#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
	{
		
	// Declara variables

		int numero;
	
	// Parametros de usuario
	
		printf("Numero del 1 al 5(inclusive)? \n");
		scanf("%d", &numero);
		
	// Logica del programa
	
		if (numero % 2 == 0)
			{
				printf("Tu numero es par \n");
			}
		else
			{
				printf("Tu numero es impar \n");
			}
	
	
	// Espera
	system("pause");
	
	return 0;
	
	}
