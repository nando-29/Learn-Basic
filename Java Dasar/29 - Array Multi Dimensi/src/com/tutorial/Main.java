package com.tutorial;
import java.util.Arrays;

public class Main {

    public static void main(String[] args) {
        int[][] array1D = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}};
        printArray(array1D);

        System.out.println();

        int[][] arraysatu = new int[5][3];
        printArray(arraysatu);

        for(int i = 0; i < arraysatu.length; i++){
            for(int j = 0; j < arraysatu[i].length; j++) {
                System.out.print(arraysatu[i][j] + ",");
            }
            System.out.println();
        }

    }


    private static void printArray(int[][] dataArray) {
        for (int i = 0; i < dataArray.length; i++) {
            System.out.println(Arrays.toString(dataArray[i]));
        }
    }
}
