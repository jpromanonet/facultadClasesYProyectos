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
   
        int i;
        for (i = 1; i <=12 ; i++){
            //logica de intereses
            int valorInicial = 10000;
            float porcentajeInteres10 = (float) 1.10;
            
            int primerMes;
            primerMes = (int) (valorInicial*porcentajeInteres10);
            
            if(i == 1){
                System.out.println(primerMes);
            }
            else{
                int mesProximo;
                mesProximo = (int) (primerMes * (porcentajeInteres10*i));
                System.out.println(mesProximo);
            }   
        }
    }
}
