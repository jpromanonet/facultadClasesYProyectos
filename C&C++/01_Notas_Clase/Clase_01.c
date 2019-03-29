#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
	{
	
		// Declaring global variables
		
		char primerMensaje[50]; 
		int primerValor;
		int segundoValor;
		int resultado;
		int option;
			//Para declarar una variable, el orden es el siguiente:
			//	datatype <nombreVariable>[lenght] ---> si es string o similar	
		
		// Program logic
		
			// Mostrar palabra
				//printf("Escribi una palabra: "); //Salida muestra en pantalla
		
				//scanf(primerMensaje); // Asigna un valor a una variable
				//printf("Tu palabra es: ");
				//printf(gets(primerMensaje)); // Llama la variable y al estar dentro de printf, la imprime
		
		//-------------------------------------------------------------------------------------------------------
		
		printf("Seleccionar una opcion: ");
		printf("1... Suma");
		printf("2... Multiplicar");
		printf("3... Resta");
		printf("4... Division");
		scanf("%d", option);
		
		if option = 1:
			
		
			// Suma super simple
		printf("\n");
		printf("Ingrese el primer valor: ");
		scanf("%d", &primerValor);
		printf("Ingrese el segundo valor: ");
		scanf("%d", &segundoValor);
		resultado = primerValor + segundoValor;
		printf("Resultado de la suma: %d", resultado);
		
			// Multiplicacion super simple!
		printf("\n");
		printf("Ingrese el primer valor: ");
		scanf("%d", &primerValor);
		printf("Ingrese el segundo valor: ");
		scanf("%d", &segundoValor);
		resultado = primerValor * segundoValor;
		printf("Resultado de la multiplicacion: %d", resultado);
		
	return 0;

	}
