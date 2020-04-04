#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    
    // Defino variables
    
    	// Defino la matriz
		int matriz[10][3];
		// Variables de control de la matriz(indices)
    	int i, j;
    	// Store de legajo
    	int legajo;

	// User Interface
	int cantidadEmpleados;
	printf("Cuantos empleados quiere cargar? ");
	scanf("%d", &cantidadEmpleados);
	system("cls");
	
    printf("Carga de Empleados \n");
    printf("================================================\n");
    // el indice i recorre las filas (cada empleado)
    	for(i = 0; i < cantidadEmpleados; i++){
        	// Carga empleado y DNI
			printf("\nEmpleado %d\n", i+1);
        	printf("Documento: ");
        	scanf("%d", &matriz[i][0]);
        	// Carga Sueldo
        	printf("Sueldo: ");
        	scanf("%d", &matriz[i][1]);
        	// Carga legajo
        	printf("Legajo: ");
        	scanf("%d", &matriz[i][2]);
    	}
    printf("\n");
    system("cls");

	// Tabla de Empleados cargados.
    printf("\nLos empleados han sido cargados\n");
    printf("================================================\n");
    printf("\tDocumento\tSueldo\tLegajo\n");
    for(i = 0; i < cantidadEmpleados; i++) {
        printf("\n%d", i+1);
        for(j = 0; j < 3; j++) {
            printf("\t%d", matriz[i][j]);
        }
    }
    printf("\n");

	// Modificacion de matriz de Empleados usando el vector que contiene los legajos.
    printf("\nModificar el sueldo de un empleado\n");
    printf("================================================\n");
    printf("Ingrese el numero de legajo: ");
    scanf("%d", &legajo);

    // Recorre la matriz fila por fila hasta que se termine o hasta encontrar el legajo buscado 
    for(i = 0; i < cantidadEmpleados && matriz[i][2] != legajo; i++);
		if(i < cantidadEmpleados){     
        	printf("\nEl sueldo actual es %d\n", matriz[i][1]);
        	printf("Ingrese el nuevo sueldo: ");
        	scanf("%d", &matriz[i][1]);
			printf("\nSueldo Modificado con exito\n");
    		printf("================================================\n");
       		printf("\tDocumento\tSueldo\tLegajo\n");
       		
    for(i = 0; i < cantidadEmpleados; i++) {
        	printf("\n%d", i+1);
            	for(j = 0; j < 3; j++) {
                	printf("\t%d", matriz[i][j]);
            	}
        	}
    printf("\n");
    	}else{       
        	printf("\nEl legajo %d no se encuentra\n", legajo);
    	}

    printf("\nEliminar un empleado\n");
    printf("================================================\n");
    printf("Ingrese el numero de legajo: ");
    scanf("%d", &legajo);

    // Recorre la matriz fila por fila hasta que se termine o hasta encontrar el legajo buscado
    for(i = 0; i < cantidadEmpleados && matriz[i][2] != legajo; i++);
		if(i < cantidadEmpleados){     
        	for(j = 0; j < 3; j++){
            	matriz[i][j] = 0;
        	}
        printf("\nLa matriz modificada es\n");
        printf("\tDocumento\tSueldo\tLegajo\n");
    for(i = 0; i < cantidadEmpleados; i++){
        	printf("\n%d", i+1);
            	for(j = 0; j < 3; j++){
                	printf("\t%d", matriz[i][j]);
            	}
        	}
        printf("\n");
    	}else{        
        	printf("\nEl legajo %d no se encuentra\n", legajo);
    	}

    return 0;
}
