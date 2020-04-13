package com.tutorial;

import java.util.Scanner;

public class Main{

    public static void main(String[] args){

        Scanner userInput = new Scanner(System.in);
        int panjang, lebar, luas;

        System.out.print("Input Panjang = ");
        panjang = userInput.nextInt();

        System.out.print("Input Lebar = ");
        lebar = userInput.nextInt();

        luas = panjang * lebar;
        System.out.println("Luas Persegi Panjang = " + luas);


    }
}