#include <stdio.h>
#include <stdlib.h>

char letra;

int main(void)
	{
		printf("Introduzca un caracter \n");
		scanf("%c", &letra);
		
		switch(letra)
			{
				case 'a':
					printf("Es vocal \n");
					break;
				case 'A':
					printf("Es vocal \n");
					break;
				case 'e':
					printf("Es vocal \n");
					break;
				case 'E':
					printf("Es vocal \n");
					break;
				case 'i':
					printf("Es vocal \n");
					break;
				case 'I':
					printf("Es vocal \n");
					break;
				case 'o':
					printf("Es vocal \n");
					break;
				case 'O':
					printf("Es vocal \n");
					break;
				case 'u':
					printf("Es vocal \n");
					break;
				case 'U':
					printf("Es vocal \n");
					break;
				default:
					printf("No es vocal n");
					break;
			}
			
		system("pause");
		return 0;
	}
