#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
	{
		// Declara variables
		
		int valorPrincipal = 0;
		
		// Logica de programa
		do 
			{
				printf("Ingresa un numero");
				scanf("%d", &valorPrincipal);
			}
		while(valorPrincipal < 10);
		
	system("pause");
	return 0;
	}
