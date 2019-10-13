/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package trabajopractico01;
import java.util.Scanner;
/**
 *
 * @author winEnv
 */
public class ejercicio15 {
    public static Scanner teclado;
  
    public static void main(String[] args) {
   
        teclado=new Scanner(System.in);
     
        int edad,media_edad,suma_edad,mayor_edad,mayor_175; //mayor_edad: mayores de 18 años
        double altura,media_altura,suma_alt;
     
        mayor_edad=0;
        media_altura=0;
        mayor_175=0;
        suma_edad=0;
        suma_alt=0;
     
        for (int i=1;i<7;i++){
            System.out.println("Alumno " +i);
            System.out.print("Introduzca edad: ");
            edad=teclado.nextInt();
            System.out.print("Introduzca altura: ");
            altura=teclado.nextInt();
     
            if(edad>18)
                mayor_edad++;
     
            if(altura>1.75)
                mayor_175++;
                suma_edad=suma_edad+edad;
                suma_alt=suma_alt+altura;
        }
      
        media_edad=suma_edad/6;
        media_altura=suma_alt/6;
      
        System.out.println("\n\nLa edad media es de: " +media_edad);
        System.out.println("La altura media es de: " +media_altura);
        System.out.println("Mayor de 18 años: " +mayor_edad);
        System.out.println("Mayor de 1.75: " +mayor_175);
    }
}
