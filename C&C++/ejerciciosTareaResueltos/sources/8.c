#include <stdio.h>
#include <stdlib.h>

int numeroComparado;

int main(void)
	{
		printf("Introduzca un numero \n");
		scanf("%d", &numeroComparado);
		
		if(numeroComparado > 0)
			{
				printf("Es positivo \n");
			}
		else if(numeroComparado < 0)
			{
				printf("Es negativo \n");
			}
		else
			{
				printf("Es cero \n");
			}
		
		system("pause");
		return 0;
	}
