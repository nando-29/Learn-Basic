package com.tutorial;

class Display{
    static String type = "Display";
    private String nama;

    Display(String nama){
        this.nama = nama;
    }

    void setType(String inputType){
        //type = inputType;
        //this.type = inputType;
        Display.type = inputType;
    }

    void show(){
        System.out.println("Display name = " + this.nama);
    }

}

public class Main{
    public static void main(String[] args) {
        Display display1 = new Display("Monitor");
        display1.show();

        Display display2 = new Display("Smartphone");
        display2.show();

        //Tampilkan static variabel


        //Display.type = "Komputer";

        display1.setType("TTampilann");

        System.out.println("\nMenampilkan Static Variabel");
        System.out.println(display1.type);
        System.out.println(Display.type);
    }
}