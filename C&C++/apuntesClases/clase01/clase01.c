#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

int main()
	{
	
		// Declaring global variables
 
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
		
		printf("Seleccionar una opcion: \n");
		printf("1... Suma\n");
		printf("2... Multiplicar\n");
		printf("3... Resta\n");
		printf("4... Division\n");
		scanf("%d", &option);
		
		if (option == 1){
				// Suma super simple
			printf("Ingrese el primer valor: ");
			scanf("%d", &primerValor);
			printf("Ingrese el segundo valor: ");
			scanf("%d", &segundoValor);
			resultado = primerValor + segundoValor;
			printf("Resultado de la suma: %d", resultado);
			printf("\n");
		}
		
		if (option == 2){
				// Multiplicacion super simple
			printf("Ingrese el primer valor: ");
			scanf("%d", &primerValor);
			printf("Ingrese el segundo valor: ");
			scanf("%d", &segundoValor);
			resultado = primerValor * segundoValor;
			printf("Resultado de la multiplicacion: %d", resultado);
			printf("\n");
		}

		if (option == 3){
				// Resta super simple
			printf("Ingrese el primer valor: ");
			scanf("%d", &primerValor);
			printf("Ingrese el segundo valor: ");
			scanf("%d", &segundoValor);
			resultado = primerValor - segundoValor;
			printf("Resultado de la resta: %d", resultado);
			printf("\n");
		}
		
		if (option == 4){
				// Division super simple
			printf("Ingrese el primer valor: ");
			scanf("%d", &primerValor);
			printf("Ingrese el segundo valor: ");
			scanf("%d", &segundoValor);
			resultado = primerValor / segundoValor;
			printf("Resultado de la division: %d", resultado);
			printf("\n");
		}
		
	return 0;

	}
