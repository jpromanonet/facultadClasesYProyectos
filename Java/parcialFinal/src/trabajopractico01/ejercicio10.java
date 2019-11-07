/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package trabajopractico01;
import javax.swing.JOptionPane;

public class ejercicio10 {
    public static void main(String[] args) {
  
        String contraseña="prueba";
   
        final int INTENTOS = 3;
         
        //Esta variable booleana, nos controlara que en caso de que acierte la condicion cambie
        boolean acierto=false;
  
        String password;
        for (int i=0;i<3 && !acierto;i++){
            password=JOptionPane.showInputDialog("Introduce una contraseña");
  
            //Comprobamos si coincide, no usamos ==, usamos el metodo equals
            if (password.equals(contraseña)){
                System.out.println("Enhorabuena, acertaste");
                acierto=true;
            }
        }
    }
}
