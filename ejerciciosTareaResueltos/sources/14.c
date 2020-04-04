#include <stdio.h>
#include <stdlib.h>

int numeros[10];
int mayor=0;
int menor=10;

int main(void)
	{
		// Numero 1
			// User parameters
			printf("Introduzca el numero 1: \n");
			scanf("%d", &numeros[0]);
		
			// Program Logic
			if(numeros[0]>mayor)
				{
					mayor=numeros[0];
				}
			else if(numeros[0]<menor)
				{
					menor=numeros[0];
				}

		// Numero 2
			// User parameters
			printf("Introduzca el numero 2: \n");
			scanf("%d", &numeros[1]);
		
			// Program Logic
			if(numeros[1]>mayor)
				{
					mayor=numeros[1];
				}
			else if(numeros[1]<menor)
				{
					menor=numeros[1];
				}
				
		// Numero 3
			// User parameters
			printf("Introduzca el numero 3: \n");
			scanf("%d", &numeros[2]);
		
			// Program Logic
			if(numeros[2]>mayor)
				{
					mayor=numeros[2];
				}
			else if(numeros[2]<menor)
				{
					menor=numeros[2];
				}
				
		// Numero 4
			// User parameters
			printf("Introduzca el numero 4: \n");
			scanf("%d", &numeros[3]);
		
			// Program Logic
			if(numeros[3]>mayor)
				{
					mayor=numeros[3];
				}
			else if(numeros[3]<menor)
				{
					menor=numeros[3];
				}
				
		// Numero 5
			// User parameters
			printf("Introduzca el numero 5: \n");
			scanf("%d", &numeros[4]);
		
			// Program Logic
			if(numeros[4]>mayor)
				{
					mayor=numeros[4];
				}
			else if(numeros[4]<menor)
				{
					menor=numeros[4];
				}
				
		// Numero 6
			// User parameters
			printf("Introduzca el numero 6: \n");
			scanf("%d", &numeros[5]);
		
			// Program Logic
			if(numeros[5]>mayor)
				{
					mayor=numeros[5];
				}
			else if(numeros[5]<menor)
				{
					menor=numeros[5];
				}
				
		// Numero 7
			// User parameters
			printf("Introduzca el numero 7: \n");
			scanf("%d", &numeros[6]);
		
			// Program Logic
			if(numeros[6]>mayor)
				{
					mayor=numeros[6];
				}
			else if(numeros[6]<menor)
				{
					menor=numeros[6];
				}
				
		// Numero 8
			// User parameters
			printf("Introduzca el numero 8: \n");
			scanf("%d", &numeros[7]);
		
			// Program Logic
			if(numeros[7]>mayor)
				{
					mayor=numeros[7];
				}
			else if(numeros[7]<menor)
				{
					menor=numeros[7];
				}
				
		// Numero 9
			// User parameters
			printf("Introduzca el numero 9: \n");
			scanf("%d", &numeros[8]);
		
			// Program Logic
			if(numeros[8]>mayor)
				{
					mayor=numeros[8];
				}
			else if(numeros[8]<menor)
				{
					menor=numeros[8];
				}
		
		// Numero 10
			// User parameters
			printf("Introduzca el numero 10: \n");
			scanf("%d", &numeros[9]);
		
			// Program Logic
			if(numeros[9]>mayor)
				{
					mayor=numeros[9];
				}
			else if(numeros[9]<menor)
				{
					menor=numeros[9];
				}
		
		printf("El mayor es:%d\n",mayor);
		printf("El menor es:%d\n",menor);
		
		system("pause");
		return 0;
	}
