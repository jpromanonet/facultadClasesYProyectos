/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package trabajopractico01;
import javax.swing.JOptionPane;
/**
 *
 * @author winEnv
 */
public class ejercicio08 {
     public static void main(String[] args) {
 
         
        String texto=JOptionPane.showInputDialog("Introduce un caracter ASCII");
        //Pasamos el String a char con el metodo charAt
        char caracter=texto.charAt(0);
  
        //Pasamos el caracter a codigo
        int codigo=(int)caracter;
  
        System.out.println(codigo);
    }
}
