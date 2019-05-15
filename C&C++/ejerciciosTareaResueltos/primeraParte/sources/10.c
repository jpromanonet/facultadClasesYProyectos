#include <stdio.h>
#include <stdlib.h>

int numeroComparado;

int main(void)
	{
		printf("Introduzca un numero \n");
		scanf("%d", &numeroComparado);
		
		if(numeroComparado > 100)
			{
				printf("Es mayor que 100! \n");
			}
		else 
			{
				printf("Es menor o igual que 100 \n");
			}
			
		system("pause");
		return 0;
	}
