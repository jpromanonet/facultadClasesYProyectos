/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package trabajopractico01;

public class ejercicio20 {
    public static void main(String[] args) {
		int[][] matriz = new int[8][6];

        for (int[] matriz1 : matriz) {
            for (int j = 0; j < matriz[0].length; j++) {
                matriz1[j] = 0;
                matriz1[0] = 1;
                matriz[0][j] = 1;
                matriz1[5] = 1;
                matriz[7][j] = 1;
            }
        }

        for (int[] matriz1 : matriz) {
            for (int j = 0; j < matriz[0].length; j++) {
                System.out.print(matriz1[j]);
            }
            System.out.println();
        }

	}

}
