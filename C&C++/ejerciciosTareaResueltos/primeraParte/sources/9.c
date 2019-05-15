#include <stdio.h>
#include <stdlib.h>

char instruccion;

int main(void)
	{
		printf("Introduzca un caracter \n");
		scanf("%c", &instruccion);
		
		if(instruccion == 's' || instruccion == 'n')
			{
				printf("Es correcto \n");
			}
		else
			{
				printf("Es incorrecto \n");
			}
		
		system("pause");
		return 0;
	}
