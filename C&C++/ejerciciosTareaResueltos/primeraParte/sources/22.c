#include <stdio.h>
#include <stdlib.h>

// Defining global variables

int peso;
int opcion;

int main(void)
	{
		printf("Introduzca peso en kilogramos \n");
		scanf("%d", &peso);
		
		printf("Seleccion una opcion \n");
		printf("\n");
		printf("1 --- Hectogramos \n");
		printf("2 --- Decagramos \n");
		printf("3 --- Gramos \n");
		printf("4 --- Decigramos \n");
		printf("5 --- Centigramos \n");
		printf("6 --- Miligramos \n");
		
		scanf("%d",&opcion);
		
		//Program Logic
		switch(opcion)
			{
				case 1:
					printf("El peso es:%d\n",peso/10);
					printf(" Hectogramos");
					break;
				case 2:
					printf("El peso es:%d\n",peso/100);
					printf(" Decagramos");
					break;
				case 3:
					printf("El peso es:%d\n",peso/1000);
					printf(" Gramos");
					break;
				case 4:
					printf("El peso es:%d\n",peso/10000);
					printf(" Decigramos");
					break;
				case 5:
					printf("El peso es:%d\n",peso/100000);
					printf(" Centigramos");
					break;
				case 6:
					printf("El peso es:%d\n",peso/1000000);
					printf(" Miligramos");
					break;
				default:
					printf("No es una opcion valida\n");
					break;
			}
			
		system("pause");
		return 0;
	}
