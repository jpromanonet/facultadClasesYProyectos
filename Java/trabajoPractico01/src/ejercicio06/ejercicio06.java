/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ejercicio06;

/**
 *
 * @author usuario
 */
public class ejercicio06 {
    
    public static void main(String[] args){
  
        System.out.print("10%   |   ");
        System.out.print("11%   |   ");
        System.out.print("12%   |   ");
        System.out.print("13%   |   ");
        System.out.print("14%   |");
        System.out.println("  15%");
        System.out.println("----------------------------------------------------------");
        
        int i = 1;
        int valorInicial10 = 10000;
        int valorInicial11 = valorInicial10;
        int valorInicial12 = valorInicial10;
        int valorInicial13 = valorInicial10;
        int valorInicial14 = valorInicial10;
        int valorInicial15 = valorInicial10;
        while(i < 13){
            int mesActual10 = (int) (valorInicial10 * 1.10);
            int mesActual11 = (int) (valorInicial11 * 1.11);
            int mesActual12 = (int) (valorInicial12 * 1.12);
            int mesActual13 = (int) (valorInicial13 * 1.13);
            int mesActual14 = (int) (valorInicial14 * 1.14);
            int mesActual15 = (int) (valorInicial15 * 1.15);
            System.out.print(mesActual10 + "    ");
            System.out.print(" " + mesActual11 + "    ");
            System.out.print(" " + mesActual12 + "    ");
            System.out.print(" " + mesActual13 + "    ");
            System.out.print(" " + mesActual14 + "    ");
            System.out.println(mesActual15);
            valorInicial10 = mesActual10;
            valorInicial11 = mesActual11;
            valorInicial12 = mesActual12;
            valorInicial13 = mesActual13;
            valorInicial14 = mesActual14;
            valorInicial15 = mesActual15;
            i++;
        }
        
    }
}
