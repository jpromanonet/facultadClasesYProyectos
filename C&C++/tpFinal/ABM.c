#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void menu();

// Defino puntero de Empleado
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
    int  nroEmpleado;
    char direccion[250];
    int  direccionNumero;
}Empleados;

// Funciones de Empleados
void altaEmpleados();
void bajaEmpleados();
void modifEmpleados();
void listadoEmpleados();
void buscarEmpleados();

int main(){
    menu();
    return 0;
}

void menu(){
	// Color pantalla
	system("color 0a");
	
	// Variables de opciones de menues y sub-menues
    int opcion;
	int opcion2;
    do{
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
        printf("---------------------------------------------------------\n");
        printf("---------------------------------------------------------\n");
        printf("                          1) Alta                       |\n");
        printf("                          2) Baja                       |\n");
        printf("                          3) Modificación               |\n");
        printf("                          4) Listado                    |\n");
        printf("                          5) Menu                       |\n");
        printf("---------------------------------------------------------\n");
        printf("---------------------------------------------------------\n");
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
                /*
				case 2:
                        switch(opcion2){
                            case 1:
                                AltaPresu();
                                break;
                            case 2:
                                BajaPresu();
                                break;
                            case 3:
                                ModifPresu();
                                break;
                            case 4:
                                ListadoPresu();
                                break;
                            case 5:
                                menu();
                                break;
                        }
                    break;
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
                case 6:
                	system("exit");
                    break;

            }
    }while (opcion!=6);
}

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
    printf("Ingrese Nro de Empleado: ");
    scanf("%d", &empleado.nroEmpleado);
    fseek(pf,0L,SEEK_END);
    fwrite(&empleado,sizeof(Empleados),1,pf);
    fclose(pf);
    printf("EMPLEADO CARGADO CON EXITO!");
    system("sleep 5");
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
}

//// Lista de empleados guardados en listaEmpleados.dat, listado general.
void listadoEmpleados(){
    FILE *pf;
    Empleados empleado;
    pf = fopen("listaEmpleados.dat","rb");
    fread(&empleado,sizeof(Empleados),1,pf);
    while(!feof(pf)){
    	system("color 0a");
    	printf("*************************************\n");
    	printf("Numero de empleado: %d\n", empleado.nroEmpleado);
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
        printf("*************************************\n");
        printf("\n");
        fread(&empleado,sizeof(Empleados),1,pf);
    }
    fclose(pf);
}

//// Modificacion de Empleados guardados en listaEmpleados.dat, por valor, es decir parametro a cambiar.
void modifEmpleados(){
    FILE *pf,*pfaux;
    Empleados empleado;
    int documento;
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
                    printf("Ingrese Nueva Calle: ");
                    scanf("%s",empleado.direccion);
                    printf("Numero de Calle: ");
                    scanf("%d",&empleado.direccionNumero);
                    printf("Nuevo Sueldo o Actual: ");
                    scanf("%d",&empleado.sueldo);
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
