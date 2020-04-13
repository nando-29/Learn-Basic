package com.tutorial;

public class Main{
    public static void main(String[] args) {

        int a = 0;

        while(true){
            a++;
            if(a == 10){
                break;
            }

            else if(a == 5){
                continue;
            }

            else if(a == 7){
                return; //Dengan return Program java akan berhenti
            }

            System.out.println("Looping ke- " + a);
        }

        System.out.println("==Akhir Dari Looping==");
    }
}