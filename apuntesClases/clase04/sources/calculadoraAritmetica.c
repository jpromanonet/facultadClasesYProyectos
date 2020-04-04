#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // --> Comentar si corro en Linux

int main()
	{
	
		// Declarando variables
 
		int primerValor;
		int segundoValor;
		int resultado;
		int option;
		int volverAlMenu = 1;
		
		do{
			// Parametros del usuario
		
			//system("clear"); --> Descomentar si lo corro en Linux
			system("cls"); // --> Comentar si lo corro en Linux
			printf("**********************|SUPER CALCULADORA|************************ \n");
			printf("|---------------------------------------------------------------| \n");
			printf("|Seleccionar una opcion: \n");
			printf("|---------------------------------------------------------------| \n");
			printf("|1... Suma	\n");
			printf("|2... Multiplicar \n");
			printf("|3... Resta	\n");
			printf("|4... Division \n");
			printf("|---------------------------------------------------------------| \n");
			printf("Ingresa una opcion: ");
			scanf("%d", &option);
		
			if (option == 1){
				
					// Variable scope local
					int seguirOperando = 1;
				
					do {
						// Suma super simple
					printf("SUMA \n");
					printf("------ \n");
					printf("Ingrese el primer valor: ");
					scanf("%d", &primerValor);
					printf("Ingrese el segundo valor: ");
					scanf("%d", &segundoValor);
					resultado = primerValor + segundoValor;
					printf("Resultado de la suma: %d", resultado);
					printf("\n");
					printf("Seguir sumando? \n");
					printf("SI... 1 \n");
					printf("NO... 2 \n");
					scanf("%d", &seguirOperando);
					} while(seguirOperando < 2);
				}
		
			if (option == 2){
			
					// Variable scope local
					int seguirOperando = 1;
			
					do{
						// Multiplicacion super simple
					printf("MULTIPLICACION \n");
					printf("------ \n");
					printf("Ingrese el primer valor: ");
					scanf("%d", &primerValor);
					printf("Ingrese el segundo valor: ");
					scanf("%d", &segundoValor);
					resultado = primerValor * segundoValor;
					printf("Resultado de la multiplicacion: %d", resultado);
					printf("Seguir multiplicando? \n");
					printf("SI... 1 \n");
					printf("NO... 2 \n");
					scanf("%d", &seguirOperando);
					} while(seguirOperando < 2);
			
				}

			if (option == 3){
				
					// Variable scope local
					int seguirOperando = 1;
			
					do{
						// Resta super simple
					printf("RESTA \n");
					printf("------ \n");
					printf("Ingrese el primer valor: ");
					scanf("%d", &primerValor);
					printf("Ingrese el segundo valor: ");
					scanf("%d", &segundoValor);
					resultado = primerValor - segundoValor;
					printf("Resultado de la resta: %d", resultado);
					printf("Seguir Restando? \n");
					printf("SI... 1 \n");
					printf("NO... 2 \n");
					scanf("%d", &seguirOperando);
					} while(seguirOperando < 2);
				}
		
			if (option == 3){
				
					// Variable scope local
					int seguirOperando = 1;
			
					do{
					// Division super simple
					printf("DIVISION \n");
					printf("------ \n");
					printf("Ingrese el primer valor: ");
					scanf("%d", &primerValor);
					printf("Ingrese el segundo valor: ");
					scanf("%d", &segundoValor);
					resultado = primerValor / segundoValor;
					printf("Resultado de la division: %d", resultado);
					printf("Seguir Restando? \n");
					printf("SI... 1 \n");
					printf("NO... 2 \n");
					scanf("%d", &seguirOperando);
					} while(seguirOperando < 2);
				}
			else
				{
					printf("Ingresa una opcion valida \n");
				}
			printf("Seguir trabajando? 1... SI | 2... NO \n");
			scanf("%d", &volverAlMenu);
		} while(volverAlMenu < 2);
		
	system("pause");	
	return 0;

	}
