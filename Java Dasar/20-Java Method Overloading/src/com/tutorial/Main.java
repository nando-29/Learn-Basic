package com.tutorial;

public class Main{

    static int plusMethod(int x, int y){
        return x + y;
    }

    static double plusMethod(double x, double y){
        return x + y;
    }

    static float plusMethod(float x, float y){
        return x + y;
    }






    public static void main(String[] args){

        int myNum1 = plusMethod(2,9);
        double myNum2 = plusMethod(2.5,2.5);
        float myNum3 = plusMethod(2.5f,2.5f);

        System.out.println("Int method = " + myNum1);
        System.out.println("Double method = " + myNum2);
        System.out.println("Float method = " + myNum3);





    }
}