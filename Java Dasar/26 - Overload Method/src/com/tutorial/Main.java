package com.tutorial;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        System.out.println(luas(10,5));
        System.out.println(luas(90));
    }

    private static int luas(int s){
        return s * s;
    }

    private static int luas(int p, int l){
        return p * l;
    }
}
