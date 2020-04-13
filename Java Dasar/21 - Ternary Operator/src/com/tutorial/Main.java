package com.tutorial;

import java.util.*;

public class Main {

    public static void main(String[] args){
    Scanner userInput = new Scanner(System.in);
	int x;

	System.out.print("Input X = ");
	x = userInput.nextInt();

	x = (x == 10) ? (x * x) : (x / 2);

	System.out.println("Hasil = " + x);

    }
}
