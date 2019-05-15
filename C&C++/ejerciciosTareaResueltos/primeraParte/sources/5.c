#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Declara variables

	int numero1;
	int numero2;
	int numero3;

int main()
	{
	
	// Parametros de usuario
	
		printf("Introduce un numero: \n");
		scanf("%d", &numero1);
		printf("Introduce un numero: \n");
		scanf("%d", &numero2);
		printf("Introduce un numero: \n");
		scanf("%d", &numero3);
		printf(" \n");
		
	// Logica del programa
	
		if (numero1 < numero2 && numero1 < numero3) // Comprobaciones con el numero1
			{
				if(numero2<numero3)
					{
						printf("%d",numero1);
						printf(" \n");
        				printf("%d",numero2);
        				printf(" \n");
       				    printf("%d",numero3);
					}
				else
					{
						printf("%d",numero1);
						printf(" \n");
        				printf("%d",numero3);
        				printf(" \n");
       				    printf("%d",numero2);
       				    printf(" \n");
					}
			}
			
		else if(numero2<numero1 && numero2<numero3) // Comprobaciones con el numero2
			{
				if(numero1<numero3)
					{
						printf("%d",numero2);
						printf(" \n");
       					printf("%d",numero1);
       					printf(" \n");
       					printf("%d",numero3);
       					printf(" \n");
					}
				else
					{
						printf("%d",numero2);
						printf(" \n");
        				printf("%d",numero3);
        				printf(" \n");
        				printf("%d",numero1);
        				printf(" \n");
					}
			}
			
		else if(numero3<numero1 && numero3<numero2) // Comprobaciones con el numero3
			{
				if(numero1<numero2)
					{
						printf("%d",numero3);
						printf(" \n");
        				printf("%d",numero1);
        				printf(" \n");
        				printf("%d",numero2);
        				printf(" \n");
       				}
       			else
       				{
        				printf("%d",numero3);
        				printf(" \n");
        				printf("%d",numero2);
        				printf(" \n");
        				printf("%d",numero1);
        				printf(" \n");
       				}
			}
	
	
	// Espera
	system("pause");
	
	return 0;
	
	}
