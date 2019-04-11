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
	
		if (numero <= 5)
			{
				if (numero / 1 == numero && numero / numero == 1)
					{
						printf("Es un numero primo! \n");
					}
				else
					{
						printf("Tu numero no es primo! \n");
					}
			}
		else
			{
				printf("Tiene que ser un numero entre 1 y 5 \n");
			}
			
	// Espera
	system("pause");
	
	return 0;
	
	}
