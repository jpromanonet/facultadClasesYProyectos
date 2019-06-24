#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Funcion principal de Menu
void menu();

// Punteros

//// Defino puntero de Empleado
typedef struct{
    char nombre[250];
    char apellido[250];
    int  dni;
    int  diaAlta;
    int  mesAlta;
    int  anioAlta;
    char email[250];
    int  telefono;
    int  sueldo;
    char obraSocial[50];
    int  nroEmpleado;
    char direccion[250];
    int  direccionNumero;
}Empleados;

//// Defino puntero de Presupuestos
typedef struct{
	int  codigoPresupuesto;
	char razonSocial[250];
	int  diaPresupuesto;
	int  mesPresupuesto;
	int  anioPresupuesto;
	int  precioPresupuesto;
	char moneda[100];
	char descripcion[250];
	char emailPresu[250];
}Presupuesto;

// Funciones relacionales a los punteros previamente definidos

//// Funciones de Empleados
void altaEmpleados();
void bajaEmpleados();
void modifEmpleados();
void listadoEmpleados();

//// Funciones de Presupuestos
void altaPresupuesto();
void bajaPresupuesto();
void modifPresupuesto();
void listadoPresupuesto();

int main(){
    menu();
    return 0;
}

/*----------------------------------------------------------------------------------------------------------*/

// Menu y submenues

void menu(){
	// Color pantalla
	system("color 0a");
	
	// Variables de opciones de menues y sub-menues
    int opcion;
	int opcion2;
    do{
        // Menu Principal
    	printf("********************************************************\n");
    	printf("**                 ABM - TP FINAL - UNLZ              **\n");
    	printf("********************************************************\n");
    	printf("**                    MENU PRINCIPAL                  **\n");
    	printf("********************************************************\n");
        printf("--------------------------------------------------------\n");
        printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf("--------------------------------------------------------\n");
        printf("                          1) Empleados                 |\n");
        printf("========================================================\n");
        printf("                          2) Presupuestos              |\n");
        printf("                          3) Productos                 |\n");
        printf("                          4) Proveedores               |\n");
        printf("                          5) Clientes                  |\n");
        printf("========================================================\n");
        printf("                          6) Facturas                  |\n");
        printf("========================================================\n");
        printf("                          7) Manuales                  |\n");
        printf("========================================================\n");
        printf("                          8) Licencia                  |\n");
        printf("========================================================\n");
        printf("                          9) Salir                     |\n");
        printf("--------------------------------------------------------\n");
        printf("Seleccione una opcion: ");
        scanf("%d",&opcion);
        system("cls");

        // Submenu ABM
        printf("--------------------------------------------------------\n");
        printf("--------------------------------------------------------\n");
        printf("                          1) Alta                      |\n");
        printf("                          2) Baja                      |\n");
        printf("                          3) Modificacion              |\n");
        printf("                          4) Listado                   |\n");
        printf("                          5) Menu                      |\n");
        printf("--------------------------------------------------------\n");
        printf("--------------------------------------------------------\n");
        printf("Seleccione una opcion: ");
		scanf("%d",&opcion2);
        system("cls");
            switch (opcion){
            	case 1:
                        switch(opcion2){
                            case 1:
                                altaEmpleados();
                                break;
							case 2:
                                bajaEmpleados();
                                break;
                            case 3:
                                modifEmpleados();
                                break;
                            case 4:
                                listadoEmpleados();
                                break;
							case 5:
                                menu();
                                break;
                        }
                    break;
                
				case 2:
                        switch(opcion2){
                            case 1:
                                altaPresupuesto();
                                break;
							case 2:
                                bajaPresupuesto();
                                break;
                            case 3:
                                modifPresupuesto();
                                break;
                            case 4:
                                listadoPresupuesto();
                                break;
							case 5:
                                menu();
                                break;
                        }
                    break;
                /*
                case 3:
                        switch(opcion2){
                            case 1:
                                AltaProds();
                                break;
                            case 2:
                                BajaProds();
                                break;
                            case 3:
                                ModifProds();
                                break;
                            case 4:
                                ListadoProds();
                                break;
                            case 5:
                                menu();
                                break;
                        }
                    break;
                case 4:
                        switch(opcion2){
                            case 1:
                                //AltaProvs();
                                break;
                            case 2:
                                //BajaProvs();
                                break;
                            case 3:
                                //ModifProvs();
                                break;
                            case 4:
                                //ListadoProvs();
                                break;
                            case 5:
                                menu();
                                break;
                        }
                    break;
                case 5:
                        switch(opcion2){
                            case 1:
                                //AltaClientes();
                                break;
                            case 2:
                                //BajaClientes();
                                break;
                            case 3:
                                //ModifClientes();
                                break;
                            case 4:
                                //ListadoClientes();
                                break;
                            case 5:
                                menu();
                                break;
                        }
                        */
                    break;
                case 9:
                	system("exit");
                    break;

            }
    }while (opcion!=9);
}

/*----------------------------------------------------------------------------------------------------------*/

// ABM Empleados

//// Alta de empleados que se guardan en listaEmpleados.dat
void altaEmpleados(){
    FILE *pf;
    Empleados empleado;
    pf = fopen("listaEmpleados.dat","ab");
    printf("Ingrese nombre: ");
    scanf("%s", empleado.nombre);
    printf("Ingrese Apellido: ");
    scanf("%s", empleado.apellido);
    printf("Ingrese DNI: ");
    scanf("%d", &empleado.dni);
    printf("Ingrese dia de Alta: ");
    scanf("%d", &empleado.diaAlta);
    printf("Ingrese mes de Alta: ");
    scanf("%d", &empleado.mesAlta);
    printf("Ingrese anio de Alta: ");
    scanf("%d", &empleado.anioAlta);
    printf("Ingrese E-mail: ");
    scanf("%s", empleado.email);
    printf("Ingrese Telefono: ");
    scanf("%d", &empleado.telefono);
	printf("Ingrese Calle: ");
    scanf("%s", empleado.direccion);
	printf("Altura de calle: ");
    scanf("%d", &empleado.direccionNumero);  
    printf("Ingrese Sueldo a percibir: ");
    scanf("%d", &empleado.sueldo);
    printf("Ingrese Obra Social: ");
    scanf("%s", empleado.obraSocial);
    printf("Ingrese Nro de Empleado: ");
    scanf("%d", &empleado.nroEmpleado);
    fseek(pf,0L,SEEK_END);
    fwrite(&empleado,sizeof(Empleados),1,pf);
    fclose(pf);
    
    // Mensaje de exito
    printf("\n");
    printf("***********************************\n");
    printf("EMPLEADO CARGADO CON EXITO!\n");
    printf("***********************************\n");
    printf("\n");
	        
    // Presiona para continuar  
	system("pause"); 
	system("cls");
    
    // Limpia pantalla y vuelve al menu
	system("cls");
    menu();
}

//// Baja de empleados guardados en listaEmpleados.dat por DNI
void bajaEmpleados(){
    FILE *pf,*pfaux;
    Empleados empleado;
    int documentoBaja;
    pf = fopen("listaEmpleados.dat","rb");
    pfaux = fopen("listaEmpleadosAux.dat","ab");
    printf("Ingrese DNI \n");
    scanf("%d",&documentoBaja);
    fread(&empleado,sizeof(Empleados),1,pf);
        while (!feof(pf)){
                if (empleado.dni != documentoBaja){
                    fseek(pfaux,0l,SEEK_END);
                    fwrite(&empleado,sizeof(Empleados),1,pfaux);
                }
            fread(&empleado,sizeof(Empleados),1,pf);
        }
    fclose(pf);
    fclose(pfaux);
    remove("listaEmpleados.dat");
    rename("listaEmpleadosAux.dat","listaEmpleados.dat");
    
    // Mensaje de baja
    printf("\n");
    printf("***********************************\n");
    printf("EMPLEADO DADO DE BAJA\n");
    printf("***********************************\n");
    printf("\n");
    
    // Presiona para continuar  
	system("pause"); 
	system("cls");
}

//// Lista de empleados guardados en listaEmpleados.dat, listado general.
void listadoEmpleados(){
    FILE *pf;
    Empleados empleado;
    pf = fopen("listaEmpleados.dat","rb");
    fread(&empleado,sizeof(Empleados),1,pf);
    while(!feof(pf)){
    	// Ficha de empleado
    	system("color 0a");
    	printf("*************************************\n");
    	printf("Numero de empleado: %d\n", empleado.nroEmpleado);
    	printf("*************************************\n");
    	printf("=========DATOS PERSONALES========\n");
        printf("Nombre: %s\n", empleado.nombre);
        printf("Apellido: %s\n", empleado.apellido);
        printf("DNI: %d\n", empleado.dni);
        printf("=============INGRESO=============\n");
        printf("Fecha de alta: %d", empleado.diaAlta);
		printf("/%d", empleado.mesAlta);  
		printf("/%d\n", empleado.anioAlta); 
		printf("=============CONTACTO============\n");
        printf("Email: %s\n", empleado.email);
        printf("Telefono: %d\n", empleado.telefono);
        printf("Direccion: %s", empleado.direccion);
        printf(" %d\n", empleado.direccionNumero);
        printf("==============SUELDO=============\n");
        printf("Sueldo: %d\n", empleado.sueldo);
        printf("==============BENEFICIOS=========\n");
        printf("Obra Social: %s\n", empleado.obraSocial);
        printf("*************************************\n");
        printf("\n");
        fread(&empleado,sizeof(Empleados),1,pf);
    }
    fclose(pf);
    
    // Presiona para continuar  
	system("pause"); 
	system("cls");
}

//// Modificacion de Empleados guardados en listaEmpleados.dat, por valor, es decir parametro a cambiar.
void modifEmpleados(){
    FILE *pf,*pfaux;
    Empleados empleado;
    int documento;
    int opcionModifica;
    pf = fopen("listaEmpleados.dat","rb");
    pfaux = fopen("listaEmpleadosAux.dat","ab");
    printf("Buscar DNI: ");
    scanf("%d",&documento);
    fread(&empleado,sizeof(Empleados),1,pf);
        while (!feof(pf)){
                if (empleado.dni != documento){
                    fseek(pfaux,0l,SEEK_END);
                    fwrite(&empleado,sizeof(Empleados),1,pfaux);
                }else{
                	// Sun menu para seleccionar el valor a modificar de la ficha de empleado.
                	printf("*********************************************************\n");
    				printf("**                    MODIFICAR EMPLEADO               **\n");
    				printf("*********************************************************\n");
        			printf("---------------------------------------------------------\n");
        			printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
                	printf("---------------------------------------------------------\n");
                    printf("---------------------------------------------------------\n");
                    printf("                          1) Direccion                  |\n");
                    printf("                          2) Sueldo                     |\n");
                    printf("                          3) Obra Social                |\n");
                    printf("                          4) E-mail                     |\n");
                    printf("                          5) Telefono                   |\n");
                    printf("---------------------------------------------------------\n");
                    printf("---------------------------------------------------------\n");
                    printf("Seleccione una opcion: ");
		            scanf("%d",&opcionModifica);
                        switch (opcionModifica){
                        	case 1:
                        		printf("---------------------------------------------------------\n");
                               	printf("Ingrese Nueva Calle: ");
                                scanf("%s",empleado.direccion);
                                printf("Numero de Calle: ");
                                scanf("%d",&empleado.direccionNumero);
								system("cls");
								break;
							case 2:
								printf("---------------------------------------------------------\n");
								printf("Nuevo Sueldo o Actual: ");
                                scanf("%d",&empleado.sueldo);
								system("cls");
								break;
							case 3:
								printf("---------------------------------------------------------\n");
								printf("Ingrese Nueva Obra Social: ");
                                scanf("%s",empleado.obraSocial);
								system("cls");
								break;
							case 4:
								printf("---------------------------------------------------------\n");
								printf("Ingrese Nuevo E-mail: ");
                                scanf("%s",empleado.email);
								system("cls");
								break;
							case 5:
								printf("---------------------------------------------------------\n");
							 	printf("Ingrese Nuevo Telefono: ");
                                scanf("%d",empleado.telefono);
                                system("cls");
								break;
                        }
                    fseek(pfaux,0l,SEEK_END);
                    fwrite(&empleado,sizeof(Empleados),1,pfaux);
                }
            fread(&empleado,sizeof(Empleados),1,pf);
        }
    fclose(pf);
    fclose(pfaux);
    remove("listaEmpleados.dat");
    rename("listaEmpleadosAux.dat","listaEmpleados.dat");
}

/*----------------------------------------------------------------------------------------------------------*/

// ABM Presupuestos

//// Alta de empleados que se guardan en listaEmpleados.dat
void altaPresupuesto(){
    FILE *pf;
    Presupuesto pres;
    pf = fopen("listaPresupuestos.dat","ab");
    printf("Ingrese codigo de presupuesto (Hasta 8 digitos): ");
    scanf("%d", &pres.codigoPresupuesto);
    printf("Ingrese Razon Social: ");
    scanf("%s", pres.razonSocial);
    printf("Ingrese descripcion: ");
    scanf("%s", pres.descripcion);
    printf("Ingrese Precio Estimado: ");
    scanf("%d", &pres.precioPresupuesto);
    printf("Ingrese moneda: ");
    scanf("%s", pres.moneda);
    printf("Ingrese dia de emision: ");
    scanf("%d", &pres.diaPresupuesto);
    printf("Ingrese mes de emision: ");
    scanf("%d", &pres.mesPresupuesto);
    printf("Ingrese anio de emision: ");
    scanf("%d", &pres.anioPresupuesto);
    printf("Ingrese E-mail de contacto: ");
    scanf("%s", pres.emailPresu);
    fseek(pf,0L,SEEK_END);
    fwrite(&pres,sizeof(Presupuesto),1,pf);
    fclose(pf);
    
    // Mensaje de exito
    printf("\n");
    printf("***********************************\n");
    printf("PRESUPUESTO GENERADO CON EXITO!\n");
    printf("***********************************\n");
    printf("\n");
	        
    // Presiona para continuar  
	system("pause"); 
	system("cls");
    
    // Limpia pantalla y vuelve al menu
	system("cls");
    menu();
}

//// Baja de presupuestos guardados en listaPresupuestos.dat por Codigo de Presupuesto
void bajaPresupuesto(){
    FILE *pf,*pfaux;
    Presupuesto pres;
    int codigoBaja;
    pf = fopen("listaPresupuestos.dat","rb");
    pfaux = fopen("listaPresupuestosAux.dat","ab");
    printf("Ingrese Codigo de Presupuesto \n");
    scanf("%d",&codigoBaja);
    fread(&pres,sizeof(Presupuesto),1,pf);
        while (!feof(pf)){
                if (pres.codigoPresupuesto != codigoBaja){
                    fseek(pfaux,0l,SEEK_END);
                    fwrite(&pres,sizeof(Presupuesto),1,pfaux);
                }
            fread(&pres,sizeof(Presupuesto),1,pf);
        }
    fclose(pf);
    fclose(pfaux);
    remove("listaPresupuestos.dat");
    rename("listaPresupuestosAux.dat","listaPresupuestos.dat");
    
    // Mensaje de baja
    printf("\n");
    printf("***********************************\n");
    printf("PRESUPUESTO DADO DE BAJA\n");
    printf("***********************************\n");
    printf("\n");
    
    // Presiona para continuar  
	system("pause"); 
	system("cls");
}

//// Lista de presupuestos guardados en listaPresupuestos.dat, listado general.
void listadoPresupuesto(){
    FILE *pf;
    Presupuesto pres;
    pf = fopen("listaPresupuestos.dat","rb");
    fread(&pres,sizeof(Presupuesto),1,pf);
    while(!feof(pf)){
    	// Ficha de empleado
    	system("color 0a");
    	printf("*************************************\n");
    	printf("Codigo de Presupuesto: %d\n", pres.codigoPresupuesto);
    	printf("*************************************\n");
    	printf("=========DATOS SOLICITANTE========\n");
        printf("Razon Social: %s\n", pres.razonSocial);
        printf("Descripcion: %s\n", pres.descripcion);
        printf("Mail Contacto: %s\n", pres.emailPresu);
        printf("------------------------------------\n");
        printf("Precio: %d", pres.precioPresupuesto);
        printf(" %s\n", pres.moneda);
        printf("===============FECHA==============\n");
        printf("Fecha de emision: %d", pres.diaPresupuesto);
		printf("/%d", pres.mesPresupuesto);  
		printf("/%d\n", pres.anioPresupuesto); 
        printf("*************************************\n");
        printf("\n");
        fread(&pres,sizeof(Presupuesto),1,pf);
    }
    fclose(pf);
    
    // Presiona para continuar  
	system("pause"); 
	system("cls");
}

//// Modificacion de presupuestos guardados en listaPresupuestos.dat, por valor, es decir parametro a cambiar.
void modifPresupuesto(){
    FILE *pf,*pfaux;
    Presupuesto pres;
    int presModifica;
    int opcionModifica;
    pf = fopen("listaPresupuestos.dat","rb");
    pfaux = fopen("listaPresupuestosAux.dat","ab");
    printf("Buscar Codigo Presupuesto: ");
    scanf("%d",&presModifica);
    fread(&pres,sizeof(Presupuesto),1,pf);
        while (!feof(pf)){
                if (pres.codigoPresupuesto != presModifica){
                    fseek(pfaux,0l,SEEK_END);
                    fwrite(&pres,sizeof(Presupuesto),1,pfaux);
                }else{
                	// Sun menu para seleccionar el valor a modificar de la ficha de empleado.
                	printf("*********************************************************\n");
    				printf("**                    MODIFICAR PRESUPUESTO            **\n");
    				printf("*********************************************************\n");
        			printf("---------------------------------------------------------\n");
        			printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
                	printf("---------------------------------------------------------\n");
                    printf("---------------------------------------------------------\n");
                    printf("                          1) Valor                      |\n");
                    printf("                          2) Email                      |\n");
                    printf("                          3) Descripcion                |\n");
                    printf("                          4) Razon Social               |\n");
                    printf("---------------------------------------------------------\n");
                    printf("---------------------------------------------------------\n");
                    printf("Seleccione una opcion: ");
		            scanf("%d",&opcionModifica);
                        switch (opcionModifica){
                        	case 1:
                        		printf("---------------------------------------------------------\n");
                               	printf("Ingrese Nuevo Precio: ");
                                scanf("%d",&pres.precioPresupuesto);
                                printf("Ingrese Moneda: ");
                                scanf("%s",pres.moneda);
								system("cls");
								break;
							case 2:
								printf("---------------------------------------------------------\n");
								printf("Nuevo E-mail: ");
                                scanf("%s",pres.emailPresu);
								system("cls");
								break;
							case 3:
								printf("---------------------------------------------------------\n");
								printf("Ingrese Nueva Descripcion: ");
                                scanf("%s",pres.descripcion);
								system("cls");
								break;
							case 4:
								printf("---------------------------------------------------------\n");
								printf("Ingrese Razon Social: ");
                                scanf("%s",pres.razonSocial);
								system("cls");
								break;
                        }
                    fseek(pfaux,0l,SEEK_END);
                    fwrite(&pres,sizeof(Presupuesto),1,pfaux);
                }
            fread(&pres,sizeof(Presupuesto),1,pf);
        }
    fclose(pf);
    fclose(pfaux);
    remove("listaPresupuestos.dat");
    rename("listaPresupuestosAux.dat","listaPresupuestos.dat");
}
