/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author usuario
 */
public class Motocicleta {
	private String marca;
	private String modelo;
	private int año;
	private int cilindrada;
	private int peso;
	
	
	public Motocicleta(String marca, String modelo, int año, int cilindrada, int peso) {
		this.marca = marca;
		this.modelo = modelo;
		this.año = año;
		this.cilindrada = cilindrada;
		this.peso = peso;
	}
	
	public void mostrar() {
		System.out.println("Marca: "+marca);
		System.out.println("Modelo: "+modelo);
		System.out.println("Año: "+año);
		System.out.println("cilindrada: "+cilindrada+("cm3"));
		System.out.println("Peso: "+peso+"KG");
	}
	

}
