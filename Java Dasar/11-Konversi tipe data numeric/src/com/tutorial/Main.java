package com.tutorial;

public class Main {

    public static void main(String[] args) {

        int nilaiInt = 450;
        System.out.println("Nilai int = " + nilaiInt);

        System.out.println("Nilai long = " + (long)nilaiInt);

//        long nilaiLong = nilaiInt;
//        System.out.println("Nilai long = " + nilaiLong);


        //Casting Pembagian
        float a = 10;
        int b = 4;

        float c = a / b;

        System.out.printf("%f / %d = %f\n",a, b, c );


        int x = 10;
        int y = 4;

        float z = (float) x / y;

        System.out.printf("%d / %d = %f\n", x, y, z);



    }
}
