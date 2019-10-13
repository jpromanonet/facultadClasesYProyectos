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
public class ejercicio14 {
    public static void main(String []args){
    int num, unidad, decena;
    String uni = "", sobreD = "", dec = "";
    Scanner ingreso = new Scanner(System.in);
    
    System.out.println("Numero a texto");
    System.out.print("Ingresa un numero: ");
    num = ingreso.nextInt();
   
    decena = num / 10;
    unidad = (num % 10) / 1;
   
        switch (unidad) {
            case 1:
                uni = "uno";
                break;
            case 2:
                uni = "dos";
                break;
            case 3:
                uni = "tres";
                break;
            case 4:
                uni = "cuatro";
                break;
            case 5:
                uni = "cinco";
                break;
            case 6:
                uni = "seis";
                break;
            case 7:
                uni = "siete";
                break;
            case 8:
                uni = "ocho";
                break;
            case 9:
                uni = "nueve";
                break;
            default:
                break;
        }

    if (decena == 1 && unidad == 0)
      sobreD = "diez";
    else if (decena == 1 && unidad == 1)
      sobreD = "once";
    else if (decena == 1 && unidad == 2)
      sobreD = "doce";
    else if (decena == 1 && unidad == 3)
      sobreD = "trece";
    else if (decena == 1 && unidad == 4)
      sobreD = "catorce";
    else if (decena == 1 && unidad == 5)
      sobreD = "quince";
    else if (decena == 1 && unidad == 6)
      sobreD = "dieciseis";
    else if (decena == 1 && unidad == 7)
      sobreD = "diecisiete";
    else if (decena == 1 && unidad == 8)
      sobreD = "dieciocho";
    else if (decena == 1 && unidad == 9)
      sobreD = "diecinueve";   
   
        switch (decena) {
            case 2:
                dec = "veinte";
                break;
            case 3:
                dec = "treinta";
                break;
            case 4:
                dec = "cuarenta";
                break;
            case 5:
                dec = "cincuenta";
                break;
            case 6:
                dec = "sesenta";
                break;   
            case 7:
                dec = "setenta";
                break;
            case 8:
                dec = "ochenta";
                break;
            case 9:
                dec = "noventa";
                break;
            default:
                break;
        }
   
    if (num < 10)
      System.out.println("El numero es: "+ unidad);
    else if(num < 20)
      System.out.println("El numero es: "+ sobreD);
    else if(num < 100){
      if (num % 10 == 0){
        System.out.println("El numero es: "+ dec);
      }
      else{
        System.out.printf("El numero es: %s y %s\n",dec,uni);
      }
    }
   
  }
}
