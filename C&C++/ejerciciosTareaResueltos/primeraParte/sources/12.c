#include <stdio.h>
#include <stdlib.h>

int numero1;
int numero2;
int numero3;

int main(void)
	{
		printf("Introduzca numero 1: \n");
		scanf("%d", &numero1);
		printf("Introduzca numero 2: \n");
		scanf("%d", &numero2);
		printf("Introduzca numero 3: \n");
		scanf("%d", &numero3);
		
		if(numero1<numero2<numero3)
			{
				printf("Orden creciente \n");
			}
		else
			{
				printf("No estan en orden creciente");
			}
		
		system("pause");
		return 0;
	}
