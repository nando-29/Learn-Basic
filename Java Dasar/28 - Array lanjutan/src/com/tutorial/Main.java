package com.tutorial;
import java.util.Arrays;

public class Main{
    public static void main(String[] args) {

        int[] arrayAngka1 = {1, 2, 3, 4, 5};
        printArray(arrayAngka1);

        System.out.println("\n===Copy Array dengan Loop===");
        int[] arrayAngka2 = new int[5];
        for (int i = 0; i < arrayAngka1.length; i++) {
            arrayAngka2[i] = arrayAngka1[i];
        }
        printArray(arrayAngka2);


        System.out.println("\nCopy Array dengan copyOf");
        int[] arrayAngka3 = Arrays.copyOf(arrayAngka1, 5);
        printArray(arrayAngka3);


        System.out.println("\nCopy Array dengan copyOfRange");
        int[] arrayAngka4 = Arrays.copyOfRange(arrayAngka1, 3, 5);
        printArray(arrayAngka4);


        System.out.println("\nFill Array");
        int[] arrayAngka5 = new int[10];
        Arrays.fill(arrayAngka5, 1);
        printArray(arrayAngka5);


        System.out.println("\nKomparasi Array");
        int[] arrayAngka6 = {1, 2, 3, 4, 5};
        int[] arrayAngka7 = {1, 2, 3, 4, 10};
        System.out.println(Arrays.equals(arrayAngka6, arrayAngka7));


        System.out.println("\nMengecek Array yang lebih besar");
        System.out.println(Arrays.compare(arrayAngka6, arrayAngka7));


        System.out.println("\nMengecek Indeks yang berbeda");
        System.out.println(Arrays.mismatch(arrayAngka6, arrayAngka7));


        System.out.println("\nSort Array");
        int[] arrayAngka8 = {4, 6, 8, 2, 5};
        printArray(arrayAngka8);
        Arrays.sort(arrayAngka8);
        printArray(arrayAngka8);

        System.out.println("\nSearch Array");
        int angka = 2;
        int posisi = Arrays.binarySearch(arrayAngka8,angka);
        System.out.println("Array " + angka + " ada di posisi " + posisi);



    }

    private static void printArray(int[] dataArray){
        System.out.println(Arrays.toString(dataArray));
    }
}