/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package trabajopractico01;

/**
 *
 * @author usuario
 */

import java.util.Random;

public class ejercicio04 {
	static int size = 150;
	
	public static void main(String[] args){
		int[] vector = new int[size];
		llenaVector(vector);
		imprimeVector(vector);
	}
	
	public static int[] llenaVector(int[] vector){
		System.out.println("LLenando vector....");
		for(int i=0;i<vector.length;i++){
			vector[i] = new Random().nextInt(40);
		}
		return vector;
	}
	public static void imprimeVector(int[] vector){
		System.out.println("Imprimiendo vector....");
		for(int i=0;i<vector.length;i++){
			System.out.print(String.valueOf(vector[i])+" ");
		}
	}
}

