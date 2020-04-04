#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Defining global variables
int legajos[5];
int documentos[5];
int sueldo[5];

int main(void)
	{

		// Local scope
		
		int i; // Indice de comparacion
		int nroLegajo; // Nro de legajo a buscar
		int opcion; // Opcion del menu
		int volverAlMenu = 1; // Opcion de volver al menu
		
		do{
				// Menu
				system("color 0a");
				system("cls");
				printf("=========================== \n");
				printf("Seleccione una opcion \n");
				printf(" \n");
				printf("1... Cargar Datos \n");
				printf("2... Buscar Datos \n");
				printf(" \n");
				printf("=========================== \n");
				scanf("%d", &opcion);
		
					switch(opcion)
						{
							case 1:
								
								system("cls");
						
								// Carga de datos
								for(i = 0; i < 5; i++)
									{
										printf("------------------------------- \n");
										printf("Ingrese el nro de legajo: \n");
										scanf("%d", &legajos[i]);
										printf("Ingrese el nro de DNI: \n");
										scanf("%d", &documentos[i]);
										printf("Ingrese el valor del sueldo: \n");
										scanf("%d", &sueldo[i]);
									}
								break;
								
							case 2:
								
								system("cls");
								// Busqueda de datos
								printf("Introduzca el numero de legajo: \n");
								scanf("%d", &nroLegajo);
			
								if(nroLegajo == legajos[0])
									{
										printf("=========================== \n");
										printf(" \n");
										printf("Legajo Nro: %d\n", legajos[0]);
										printf("DNI-Empleado: %d\n", documentos[0]);
										printf("Sueldo: %d\n", sueldo[0]);
									}
								if(nroLegajo == legajos[1])
									{
										printf("=========================== \n");
										printf(" \n");
										printf("Legajo Nro: %d\n", legajos[1]);
										printf("DNI-Empleado: %d\n", documentos[1]);
										printf("Sueldo: %d\n", sueldo[1]);
									}
								if(nroLegajo == legajos[2])
									{
										printf("=========================== \n");
										printf(" \n");
										printf("Legajo Nro: %d\n", legajos[2]);
										printf("DNI-Empleado: %d\n", documentos[2]);
										printf("Sueldo: %d\n", sueldo[2]);
									}
								if(nroLegajo == legajos[3])
									{
										printf("=========================== \n");
										printf(" \n");
										printf("Legajo Nro: %d\n", legajos[3]);
										printf("DNI-Empleado: %d\n", documentos[3]);
										printf("Sueldo: %d\n", sueldo[3]);
									}
								if(nroLegajo == legajos[4])
									{
										printf("=========================== \n");
										printf(" \n");
										printf("Legajo Nro: %d\n", legajos[4]);
										printf("DNI-Empleado: %d\n", documentos[4]);
										printf("Sueldo: %d\n", sueldo[4]);
									}
								break;	
						}
				
				// Volver al menu
				printf(" \n");
				printf("=========================== \n");
				printf(" \n");
				printf("Seguir trabajando? 1... SI | 2... NO \n");
				printf(" \n");
				scanf("%d", &volverAlMenu);
						
			}while(volverAlMenu < 2);
		
		system("pause");
		return 0;
	}
