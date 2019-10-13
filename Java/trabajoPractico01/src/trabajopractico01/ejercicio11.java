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
public class ejercicio11 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String cadena;
        
        System.out.print("Introduce una frase: ");
        cadena = sc.nextLine();
  
        int contador=0;
        for (int i=0;i<cadena.length();i++){
            //Comprobamos si el caracter es una vocal
            if(cadena.charAt(i)=='a' || 
                    cadena.charAt(i)=='e' || 
                    cadena.charAt(i)=='i' || 
                    cadena.charAt(i)=='o' || 
                    cadena.charAt(i)=='u'){
                contador++;
            }
        }
  
        System.out.println("Hay "+contador+" vocales");
    }
}
