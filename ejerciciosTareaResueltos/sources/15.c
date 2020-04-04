#include <stdio.h>
#include <stdlib.h>

int numero1;
int numero2;
int numero3;

int main(void)
	{
		
		// User parameters
		printf("Introduzca el primer numero \n");
		scanf("%d", &numero1);
		
		printf("Introduzca el segundo numero \n");
		scanf("%d", &numero2);
		
		printf("Introduzca el tercer numero \n");
		scanf("%d", &numero3);
		
		// Program Logic
		
		if(numero1+numero2==numero3)
			{
				printf("El tercer numero es la suma de los dos primeros \n");
			}
		else
			{
				printf("El tercer numero NO es la suma de los primeros \n");
			}
			
		system("pause");
		return 0;
	}
