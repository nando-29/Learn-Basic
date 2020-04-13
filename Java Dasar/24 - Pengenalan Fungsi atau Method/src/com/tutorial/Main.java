package com.tutorial;
import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner userInput = new Scanner(System.in);
        int panjang, lebar;

        System.out.print("Input Panjang = ");
        panjang = userInput.nextInt();

        System.out.print("Input Lebar = ");
        lebar = userInput.nextInt();

        pola(panjang,lebar);
        luas(panjang,lebar);
        System.out.println("Keliling = " + keliling(panjang,lebar));

        System.out.println("\n\n");

        displayAll(panjang,lebar);


        userInput.close();
    }

    private static void displayAll(int panjang, int lebar){
        luas(panjang, lebar);

        System.out.println("Keliling = " + keliling(panjang, lebar));
    }


    private static int  keliling(int panjang, int lebar){
        return (panjang + lebar) * 2;
    }


    private static void luas(int panjang, int lebar){
        int hasil = panjang * lebar;
        System.out.println("\nLuas = " + hasil);
    }

    private static void pola(int panjang, int lebar){
        for(int i = 0; i < lebar; i++){
            for(int j = 0; j < panjang; j++){
                System.out.print("*");
            }
            System.out.println("");
        }
    }
}