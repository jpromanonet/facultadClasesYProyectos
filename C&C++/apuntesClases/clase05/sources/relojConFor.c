#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
	{
	
		// Defining variables
		
		int hora;
		int minuto;
		int segundo;
		
		// Program Logic
		
		for (hora=0; hora <= 23; hora++)
   				{
   					for (minuto=0; minuto<60; minuto++)
						{
							for(segundo=0; segundo<60; segundo++)
								{
									printf("%d:%d:%d\n",hora ,minuto, segundo);	
									system("cls");
								}
						}  	
   				}
		
		system("pause");
		return 0;
	}
