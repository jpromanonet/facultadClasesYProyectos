#include <stdio.h>
#include <stdlib.h>

int main(void)
	{
		// Defining global variables
		int horas;
		int minutos;
		int segundos;
		
		// User parameters
		printf("Introduzca hora: ");
		scanf("%d", &horas);
		printf("Introduzca minutos: ");
		scanf("%d", &minutos);
		printf("Introduzca segundos: ");
		scanf("%d", &segundos);
		
		// Program logic
		segundos = segundos+1;
		
		if (minutos>59)
			{
				minutos=0;
			}
		if(horas>23)
			{
				horas=0;
			}
		if(segundos>59)
			{
				segundos=0;
				minutos=minutos+1;
				if(minutos>59)
				{
					minutos=0;
					horas=horas+1;
					if(horas>23)
						{
							horas=0;
						}
				}
			}
		
		printf("La hora(un segundo despues) es: %02d:%02d:%02d \n", horas, minutos, segundos);
		
		system("pause");
		return 0;
	}
