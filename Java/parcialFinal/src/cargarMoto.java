
import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author usuario
 */
public class cargarMoto {
    public static void main(String[] args) {
        Motocicleta[] moto;
        try (Scanner sc = new Scanner(System.in)) {
            moto = new Motocicleta[1];
            for(int i=0;i<moto.length;i++) {
                System.out.print("\nIngrese la marca de la moto "+(i+1)+":");
                String marca=sc.nextLine();
                System.out.print("Ingrese el modelo de la moto "+(i+1)+":");
                String modelo=sc.nextLine();
                System.out.print("Ingrese el año de la moto "+(i+1)+":");
                int año=sc.nextInt();
                System.out.print("Ingrese la cilindrada de la moto "+(i+1)+":");
                int cil=sc.nextInt();
                System.out.print("Ingrese el peso de la moto "+(i+1)+":");
                int peso=sc.nextInt();
                sc.nextLine();
                
                moto[i]=new Motocicleta(marca,modelo,año,cil,peso);
            }//for para llenar
        }
		
		for(int i=0;i<moto.length;i++) {
			System.out.println("\nLos datos de la Moto "+(i+1)+" son:");
			moto[i].mostrar();
			
		}

	}
}


