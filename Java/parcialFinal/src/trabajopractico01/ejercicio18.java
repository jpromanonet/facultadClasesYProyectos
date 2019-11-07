/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package trabajopractico01;

import javax.swing.JOptionPane;

public class ejercicio18 {

    public static void main(String[] args){
        int[] valores = new int [10];
	
	for(byte i = 0;i < valores.length;i++){
            valores[i] = Integer.parseInt(JOptionPane.showInputDialog("Ingrese un numero : "));
        }

        // determinar si está ordenado de forma creciente 
        boolean creciente = true;
	boolean decreciente = true;

	for(byte i = 1; i < valores.length;i++){
            for(byte j = 0;j < valores.length - i;j++){
				
                if(valores[j] > valores[j  + 1]){
                    creciente = false; 
                }

                if(valores[j] < valores[j + 1]){
                    decreciente = false;
                }
            }
	}

	if(creciente){
		JOptionPane.showMessageDialog(null, "Los numeros ingresados están ordenados de forma creciente ");
	}		
	
	if(decreciente){
		JOptionPane.showMessageDialog(null, "Los numeros ingresados están ordenados de forma decreciente ");
	}	
		
	if(!(decreciente || creciente)){
		JOptionPane.showMessageDialog(null, "Los numeros ingresados están desordenados ");
	}		
    }
}
