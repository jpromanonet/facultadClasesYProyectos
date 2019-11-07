/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package trabajopractico01;
import java.util.Scanner;

public class ejercicio12 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String cadena;
        int opcion;
        
        System.out.print("Introduce una frase: ");
        cadena = sc.nextLine();
  
        System.out.print("Para pasar a mayuscula introduce 1, para minusculas 2: ");
        opcion = sc.nextInt();
        
            if(opcion == 1){
                System.out.println(cadena.toUpperCase());
            } else {
                System.out.println(cadena.toLowerCase());
            }
        }
  
}

