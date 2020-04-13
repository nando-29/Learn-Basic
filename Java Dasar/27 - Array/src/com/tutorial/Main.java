package com.tutorial;
import java.util.Arrays;

public class Main{
    public static void main(String[] args) {

        int[] angka = new int[4];

        angka[0] = 9;
        angka[1] = 45;
        angka[2] = 12;
        angka[3] = 7;

        System.out.println("Looping dengan lenght");
        for(int i = 0; i < angka.length; i++){
            System.out.println("\t\t" + angka[i]);
        }

        System.out.println("\nLooping dengan each");
        for(int myNumn : angka){
            System.out.println("\t\t" + myNumn);
        }

    }
}