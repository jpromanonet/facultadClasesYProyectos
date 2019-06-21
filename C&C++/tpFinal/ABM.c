#include <stdio.h>
#include <stdlib.h>

// Variables de soporte

char anyKey; // Presionar cualquier tecla.

void menu();

typedef struct{
    int codigo;
    char detalle[30];
    float precio;
    float costo;
    char prov[30];
}Producto;

typedef struct{
    int codigo;
    char nombre[30];
    char telefono[30];
    char email[30];
}Proveedores;

typedef struct{
    char cuit[30];
    char cliente[30];
    char fechaalta[11];
    char email[30];
    char telefono[30];
}Clientes;

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

typedef struct{
    int codigo;
    char fecha[11];
    char cuit[30];
    float total;
    float descuento;
}Presupuesto;

typedef struct{
    int codigo;
    char producto[30];
    int cantidad;
    float precio;
}DetPresupuesto;

// Funciones de Presupuestos
void AltaPresu();
void BajaPresu();
void ModifPresu();
void ListadoPresu();

// Funciones de Productos
void AltaProds();
void BajaProds();
void ModifProds();
void ListadoProds();

// Funciones de Proveedores
void AltaProvs();
void BajaProvs();
void ModifProvs();
void ListadoProvs();

// Funciones de Clientes
void AltaClientes();
void BajaClientes();
void ModifClientes();
void ListadoClientes();

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
    int opcion;
	int opcion2;
    do{
    	printf("********************************************************\n");
    	printf("**                    MENU PRINCIPAL                  **\n");
    	printf("********************************************************\n");
        printf("--------------------------------------------------------\n");
        printf("--------------------------------------------------------\n");
        printf("                          1) Empleados                  |\n");
        printf("--------------------------------------------------------\n");
        printf("                          2) Presupuestos               |\n");
        printf("                          3) Productos                  |\n");
        printf("                          4) Proveedores                |\n");
        printf("                          5) Clientes                   |\n");
        printf("                          6) Salir                      |\n");
        printf("--------------------------------------------------------\n");
        printf("--------------------------------------------------------\n");
        scanf("%d",&opcion);
        system("cls");
        printf("--------------------------------------------------------\n");
        printf("--------------------------------------------------------\n");
        printf("                          1) Alta                       |\n");
        printf("                          2) Baja                       |\n");
        printf("                          3) Modificación               |\n");
        printf("                          4) Listado                    |\n");
        printf("                          5) Buscar                     |\n");
        printf("                          6) Volver al Menú             |\n");
        printf("--------------------------------------------------------\n");
        printf("--------------------------------------------------------\n");
        scanf("%d",&opcion2);
        system("cls");
            switch (opcion){
            	case 1:
                        switch(opcion2){
                            case 1:
                                altaEmpleados();
                                break;
                            /*
							case 2:
                                BajaEmpleados();
                                break;
                            */
                            case 3:
                                modifEmpleados();
                                break;
                            case 4:
                                listadoEmpleados();
                                break;
                            /*
							case 5:
                            	buscarEmpleados();
                            */
							case 6:
                                menu();
                                break;
                        }
                    break;
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
                    break;
                case 6:
                	system("exit");
                    break;

            }
    }while (opcion!=6);
}

void AltaPresu(){
    FILE *pf;
    Presupuesto presu;
    pf = fopen("Presupuesto.dat","ab");
    printf("Ingrese Código\n");
    scanf("%i",&presu.codigo);
    printf("Ingrese Fecha\n");
    scanf("%s",presu.fecha);
    printf("Ingrese CUIT\n");
    scanf("%s",presu.cuit);
    printf("Ingrese Total\n");
    scanf("%f",&presu.total);
    printf("Ingrese Descuento\n");
    scanf("%f",&presu.descuento);
    fseek(pf,0L,SEEK_END);
    fwrite(&presu,sizeof(Presupuesto),1,pf);
    fclose(pf);
    system("clear");
    menu();
}

void ListadoPresu(){
    FILE *pf;
    Presupuesto presu;
    pf = fopen("Presupuesto.dat","rb");
    fread(&presu,sizeof(Presupuesto),1,pf);
    while(!feof(pf)){
        printf("%i ; %s ; %s ; %.2f ; %.2f\n",presu.codigo,presu.fecha,presu.cuit,presu.total,presu.descuento);
        fread(&presu,sizeof(Presupuesto),1,pf);
    }
    fclose(pf);
}

void ModifPresu(){
    FILE *pf,*pfaux;
    Presupuesto presu;
    int codigoaux;
    pf = fopen("Presupuesto.dat","rb");
    pfaux = fopen("Presupuestoaux.dat","ab");
    printf("Ingrese Código\n");
    scanf("%i",&codigoaux);
    fread(&presu,sizeof(Presupuesto),1,pf);
        while (!feof(pf)){
                if (presu.codigo != codigoaux){
                    fseek(pfaux,0l,SEEK_END);
                    fwrite(&presu,sizeof(Presupuesto),1,pfaux);
                }else{
                    printf("Ingrese Fecha\n");
                    scanf("%s",presu.fecha);
                    printf("Ingrese CUIT\n");
                    scanf("%s",presu.cuit);
                    printf("Ingrese Total\n");
                    scanf("%f",&presu.total);
                    printf("Ingrese Descuento\n");
                    scanf("%f",&presu.descuento);
                    fseek(pfaux,0l,SEEK_END);
                    fwrite(&presu,sizeof(Presupuesto),1,pfaux);
                }
            fread(&presu,sizeof(Presupuesto),1,pf);
        }
    fclose(pf);
    fclose(pfaux);
    remove("Presupuesto.dat");
    rename("Presupuestoaux.dat","Presupuesto.dat");
}

void BajaPresu(){
    FILE *pf,*pfaux;
    Presupuesto presu;
    int codigoaux;
    pf = fopen("Presupuesto.dat","rb");
    pfaux = fopen("Presupuestoaux.dat","ab");
    printf("Ingrese Código\n");
    scanf("%i",&codigoaux);
    fread(&presu,sizeof(Presupuesto),1,pf);
        while (!feof(pf)){
                if (presu.codigo != codigoaux){
                    fseek(pfaux,0l,SEEK_END);
                    fwrite(&presu,sizeof(Presupuesto),1,pfaux);
                }
            fread(&presu,sizeof(Presupuesto),1,pf);
        }
    fclose(pf);
    fclose(pfaux);
    remove("Presupuesto.dat");
    rename("Presupuestoaux.dat","Presupuesto.dat");
}

void AltaProds(){
    FILE *pf;
    Producto prod;
    pf = fopen("Productos.dat","ab");
    printf("Ingrese Codigo\n");
    scanf("%i",&prod.codigo);
    printf("Ingrese Detalle\n");
    scanf("%s",prod.detalle);
    printf("Ingrese Precio\n");
    scanf("%f",&prod.precio);
    printf("Ingrese Costo\n");
    scanf("%f",&prod.costo);
    printf("Ingrese Proveedor\n");
    scanf("%s",prod.prov);
    fseek(pf,0L,SEEK_END);
    fwrite(&prod,sizeof(Producto),1,pf);
    fclose(pf);
    system("clear");
    menu();
}

void ListadoProds(){
    FILE *pf;
    Producto prod;
    pf = fopen("Productos.dat","rb");
    fread(&prod,sizeof(Producto),1,pf);
    while(!feof(pf)){
        printf("%i ; %s ; %.2f ; %.2f ; %s\n",prod.codigo,prod.detalle,prod.precio,prod.costo,prod.prov);
        fread(&prod,sizeof(Producto),1,pf);
    }
    fclose(pf);
}

void ModifProds(){
    FILE *pf,*pfaux;
    Producto prod;
    int codigoaux;
    pf = fopen("Productos.dat","rb");
    pfaux = fopen("Productosaux.dat","ab");
    printf("Ingrese Código\n");
    scanf("%i",&codigoaux);
    fread(&prod,sizeof(Producto),1,pf);
        while (!feof(pf)){
                if (prod.codigo != codigoaux){
                    fseek(pfaux,0l,SEEK_END);
                    fwrite(&prod,sizeof(Producto),1,pfaux);
                }else{
                    printf("Ingrese Detalle\n");
                    scanf("%s",prod.detalle);
                    printf("Ingrese Precio\n");
                    scanf("%f",&prod.precio);
                    printf("Ingrese Costo\n");
                    scanf("%f",&prod.costo);
                    printf("Ingrese Proveedor\n");
                    scanf("%s",prod.prov);
                    fseek(pfaux,0l,SEEK_END);
                    fwrite(&prod,sizeof(Producto),1,pfaux);
                }
            fread(&prod,sizeof(Producto),1,pf);
        }
    fclose(pf);
    fclose(pfaux);
    remove("Productos.dat");
    rename("Productosaux.dat","Productos.dat");
}

void BajaProds(){
    FILE *pf,*pfaux;
    Producto prod;
    int codigoaux;
    pf = fopen("Productos.dat","rb");
    pfaux = fopen("Productosaux.dat","ab");
    printf("Ingrese Código\n");
    scanf("%i",&codigoaux);
    fread(&prod,sizeof(Producto),1,pf);
        while (!feof(pf)){
                if (prod.codigo != codigoaux){
                    fseek(pfaux,0l,SEEK_END);
                    fwrite(&prod,sizeof(Producto),1,pfaux);
                }
            fread(&prod,sizeof(Producto),1,pf);
        }
    fclose(pf);
    fclose(pfaux);
    remove("Productos.dat");
    rename("Productosaux.dat","Productos.dat");
}

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
