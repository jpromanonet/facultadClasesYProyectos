/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ejercicio03;
//programa que muestra el nombre y el sueldo del empleado que más gana
import java.util.*;
/**
 *
 * @author usuario
 */
public class ejercicio03 {
     public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
         //creamos los arrays
        String[] empleados = new String[20];
        double[] sueldos = new double[20];

        //variables donde guardar el nombre y sueldo del empleado que más gana
        String nombreMayor;
        double mayorSueldo;

        int i = 0;

        //se lee el primer empleado
        System.out.println("Lectura de nombres y sueldos de empleados: ");
        System.out.print("Empleado " + (i + 1) + ": ");
        empleados[i] = sc.nextLine();
        System.out.print("Sueldo: ");
        sueldos[i] = sc.nextDouble();

        //se toma el primero como mayor
        mayorSueldo = sueldos[i];
        nombreMayor = empleados[i];

        //se leen el resto de empleados
        for (i = 1; i < empleados.length; i++) {
            sc.nextLine(); //limpiar el buffer
            System.out.print("Empleado " + (i + 1) + ": ");
            empleados[i] = sc.nextLine();
            System.out.print("Sueldo: ");
            sueldos[i] = sc.nextDouble();
            //se compara el sueldo leído con el mayor
            if (sueldos[i] > mayorSueldo) {
                mayorSueldo = sueldos[i];
                nombreMayor = empleados[i];
            }
        }

        //mostrar resultados
        System.out.println("-------------------------------------------------");
        System.out.println("Empleado con mayor sueldo: " + nombreMayor );
        System.out.println("Sueldo: " + mayorSueldo);
    }
    
}
