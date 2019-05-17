#include <stdio.h>
#include <stdlib.h>

int primerNumero;
int segundoNumero;

int main(void)
	{
		
		// User parameters
		printf("Introduzca numero del 1 al 5: ");
		scanf("%d", &primerNumero);
		
		printf("Introduzca numero del 1 al 5: ");
		scanf("%d", &segundoNumero);
		
		// Program Logic
		if(primerNumero!=4 && segundoNumero!=4)
			{
				printf("Ambos son primos \n");
			}
		else
			{
				printf("Los numeros o uno de ellos no son primos \n");		
			}
			
		system("pause");
		return 0;
	}
