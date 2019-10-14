/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package trabajopractico01;
import java.util.Scanner;
import javax.swing.JOptionPane;

public class Ejercicio11 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int VocalA = 0;
        int VocalE = 0;
        int VocalI = 0;
        int VocalO = 0;
        int VocalU = 0;
        int contador=0;

        String cadena = JOptionPane.showInputDialog("Introduzca una frase: ");
  
        for (int i=0;i<cadena.length();i++)
          {
              if(cadena.charAt(i)=='a' || cadena.charAt(i)=='A' || cadena.charAt(i)=='e' ||cadena.charAt(i)=='E' || cadena.charAt(i)=='i' || cadena.charAt(i)=='I' || cadena.charAt(i)=='o' || cadena.charAt(i)=='O' || cadena.charAt(i)=='u' || cadena.charAt(i)=='U')
              
              {
              
                        if (cadena.charAt(i)== 'a'|| cadena.charAt(i)== 'A')
                        {
                            VocalA++;
                        }
                        
                        if (cadena.charAt(i)== 'e'|| cadena.charAt(i)== 'E')
                        {
                            VocalE++;
                        }
                        
                        if (cadena.charAt(i)== 'i'|| cadena.charAt(i)== 'I')
                        {
                            VocalI++;
                        }
                        
                        if (cadena.charAt (i) == 'o'|| cadena.charAt(i)== 'O')
                        {
                            VocalO++;
                        }
                        
                        if (cadena.charAt(i)== 'u'|| cadena.charAt(i)== 'U')
                        {
                            VocalU++;
                        }
                        
                        contador++;
              }
        }
            JOptionPane.showMessageDialog(null, "Usted ha ingresado un total de "+contador+ " vocales\nCantidad Vocal A : "+VocalA+"\nCantidad Vocal E : "+VocalE+ "\nCantidad Vocal i : "+VocalI+ "\nCantidad Vocal O : "+VocalO+ "\nCantidad Vocal U : "+VocalU);
    }
}