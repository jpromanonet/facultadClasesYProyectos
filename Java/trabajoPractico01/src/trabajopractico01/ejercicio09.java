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
public class ejercicio09 {
    public static void main(String[] args) {
 
        String texto=JOptionPane.showInputDialog("Introduce el número de ventas");
 
        //Pasamos el String a int
        int numVentas=Integer.parseInt(texto);
 
        /*Declaramos una variable para sumar las ventas,
         * si lo declaramos dentro del bucle, no podriamos
         * acceder fuera del bucle a la suma de las ventas.
         * Esto es por el ámbito.
         */
        int sumaVentas=0;
        for (int i=0;i<numVentas;i++){
            //indico el numero de venta
            texto=JOptionPane.showInputDialog("Introduce el precio de la venta"+(i+1));
            int venta=Integer.parseInt(texto);
 
            //Acumulamos el valor de la venta
            sumaVentas=sumaVentas+venta;
        }
 
        System.out.println(sumaVentas);
    }
}
