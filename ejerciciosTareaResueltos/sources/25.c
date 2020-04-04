#include <stdio.h>
#include <stdlib.h>

// Defining global variables

float importe;
float aumento;
float antiguedad;

int main(void)
	{
		importe = 40000;
		
		printf("Introduzca la antiguedad del trabajador: ");
		scanf("%d", &antiguedad);
		
		if(antiguedad>10)
			{
				aumento=importe*0.1;
			}
		else if(antiguedad < 10 && antiguedad >= 5 )
			{
				aumento=importe*0.07;
			}
		else if(antiguedad < 5 && antiguedad >= 3)
			{
				aumento=importe*0.05;
			}
		else
			{
				aumento=importe*0.03;
			}
			
		printf("El sueldo que le corresponde anualmente al trabajador es de %f pesos \n",importe+aumento);
		
		system("pause");
		return 0;
	}
