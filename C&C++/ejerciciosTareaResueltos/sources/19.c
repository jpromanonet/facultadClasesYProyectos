#include <stdio.h>
#include <stdlib.h>

int numero[3];

int main(void)
	{
		// User parameters
		
		printf("Introduzca el primer numero: ");
		scanf("%d", &numero[0]);
		
		printf("Introduzca el segundo numero: ");
		scanf("%d", &numero[1]);
		
		printf("Introduzca el tercer numero: ");
		scanf("%d", &numero[2]);
		
		// Program logic
		
		if(numero[0]*numero[1]==numero[2])
			{
				printf("El tercer numero es igual a la multiplicacion de los dos primeros \n");
			}
		else
			{
				printf("El tercer numero no es igual a la multiplicacion de los dos primeros \n");
			}
			
		system("pause");
		return 0;
	}
