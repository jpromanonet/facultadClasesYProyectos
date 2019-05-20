#include <stdio.h>
#include <stdlib.h>

int main(void)
	{
		// Declaring variables
		float importe;
		float deduccion;
		
		// User parameters
		printf("Introduzca importe: \n");
		scanf("%f", &importe);
		
		// Program logic
		if(importe>15000)
			{
				deduccion=importe*0.16;
			}
		else
			{
				deduccion=importe*0.1;
			}
		
		printf("El importe neto es %f\n",importe-deduccion);
		
		system("pause");
		return 0;
	}
