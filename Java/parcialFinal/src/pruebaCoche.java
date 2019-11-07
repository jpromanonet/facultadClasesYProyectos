/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author usuario
 */
public class pruebaCoche {
  public static void main(String[] args) {
    
    Coche cocheDeTincho = new Coche("Fork K", "2017");
    Coche cocheDeAriel = new Coche("Renault Clio", "2004");

    cocheDeTincho.recorre(3045600);
    cocheDeTincho.recorre(40);
    cocheDeTincho.recorre(220);
    cocheDeAriel.recorre(60);
    cocheDeAriel.recorre(150);
    cocheDeAriel.recorre(90);
    System.out.println("El auto de Tincho ha recorrido " + cocheDeTincho.getKilometraje() + "Km");
    System.out.println("El auto de Ariel ha recorrido " + cocheDeAriel.getKilometraje() + "Km");
    System.out.println("----------------------------------------------------------------------");
    System.out.println("El kilometraje total ha sido de " + Coche.getKilometrajeTotal() + "Km");
  }
}
