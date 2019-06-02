#include <stdio.h>
#include <stdlib.h>

// Defining global variables

int lado;
int ladoEscaleno1;
int ladoEscaleno2;
int base;
int opcion;

int main(void)
	{
		// User parameters
		printf("Introduzca lado del triangulo \n");
		scanf("%d", &lado);
		printf("Introduzca segundo lado del triangulo si es Escaleno \n");
		scanf("%d", &ladoEscaleno1);
		printf("Introduzca tercer lado del triangulo si es Escaleno \n");
		scanf("%d", &ladoEscaleno2);
		printf("Introduzca la base del triangulo \n");
		scanf("%d", &base);
		
		printf("Seleciones opcion: \n");
		printf("1 - Equilatero \n");
		printf("2 - Isosceles \n");
		printf("3 - Escaleno \n");
		scanf("%d", &opcion);
		
		// Program Logic
		switch(opcion)
			{
				case 1:
					printf("El perimetro es: %d\n", 3*lado);
					break;
				case 2:
					printf("El perimetro es: %d\n", (2*lado)+base);
					break;
				case 3:
					printf("El perimetro es: %d\n", lado+ladoEscaleno1+ladoEscaleno2);
					break;
				default:
					printf("Opcion no valida");
					break;
			}
			
		system("pause");
		return 0;
	}
