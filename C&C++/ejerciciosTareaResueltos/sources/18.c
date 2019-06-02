#include <stdio.h>
#include <stdlib.h>

int primerNumero;
int segundoNumero;

int main(void)
	{
		printf("Introuzca el primer numero");
		scanf("%d", &primerNumero);
		printf("Introduzca el segundo numero");
		scanf("%d", &segundoNumero);
		
		if(primerNumero%2==0 && segundoNumero%2==0)
			{
				printf("Ambos son pares. \n");
			}
		else
			{
				printf("Ambos o alguno de los numeros no son pares \n");
			}
			
		system("pause");
		return 0;
	}
