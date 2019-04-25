#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
	{
		
	// Declara variables

		char letra;
	
	// Parametros de usuario
	
		printf("Introduce una letra: \n");
		scanf("%c", &letra);
		
	// Logica del programa
	
		if (letra == 'a' 
			|| letra == 'A' 
			|| letra == 'e' 
			|| letra == 'E' 
			|| letra == 'i' 
			|| letra == 'I' 
			|| letra == 'o' 
			|| letra == 'O' 
			|| letra == 'u' 
			|| letra == 'U')
			{
				printf("Es una vocal \n");
			}
		else
			{
				printf("No es una consonante \n");
			}
	
	
	// Espera
	system("pause");
	
	return 0;
	
	}
