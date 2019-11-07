/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package trabajopractico01;

import javax.swing.JOptionPane;

public class ejercicio19 {
    public static void main(String[] args){
		
        int [][] valores = {{1, 2, 3}, 
                            {3 ,2 ,1}, 
                            {5, 4, 2}};

        int suma_colu = 0, suma_fila = 0;		

            for(byte i = 0;i < valores.length;i++){		
		for(byte j = 0; j < valores.length;j++){
                    suma_colu += valores[i][j];
		}
            }
		
            for(byte j = 0;j < valores.length;j++){
		for(byte i = 0; i < valores.length;i++){
                    suma_fila += valores[i][j];
                    System.out.println("valores [" + i +"][" + j + "] = " + valores[i][j]);
		}
            }
		
	JOptionPane.showMessageDialog(null, "Suma de columnas : " + suma_colu);
	JOptionPane.showMessageDialog(null, "Suma de filas : " + suma_fila);	
    }
}