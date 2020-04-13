package com.tutorial;

import java.util.Scanner;

public class Main{



    static void luasPersegi(int panjang, int lebar){
        System.out.println("Luas Persegi = " + panjang * lebar + " cm");
    }

    static int luasSegitiga(int alas, int tinggi){
        return alas * tinggi / 2;
    }






    public static void main(String[] args){
        Scanner userInput = new Scanner(System.in);
        int panjang, lebar, alas, tinggi;

        System.out.println("\n\n====Luas Persegi Panjang dengan Void====\n");

        System.out.print("Input panjang = ");
        panjang = userInput.nextInt();

        System.out.print("Input lebar = ");
        lebar = userInput.nextInt();

        luasPersegi(panjang,lebar);


        System.out.println("\n\n\n\n====Luas Segitiga dengan Return====\n");


        System.out.print("Input panjang = ");
        alas = userInput.nextInt();

        System.out.print("Input lebar = ");
        tinggi = userInput.nextInt();


        System.out.println("Luas Segitiga = " +luasSegitiga(alas, tinggi) + " cm");

    }
}