package com.tutorial;

class Player{
    String name; //Default, dia akan bisa dibaca dan ditulis dari luar class
    public int exp; //Public, dia akan bisa dibaca dan ditulis dari luar class
    private int health; //private, hanya akan bisa dibaca dan ditulis didalam class saja

    Player(String name, int exp, int health){
        this.name = name;
        this.exp = exp;
        this.health = health;
    }

    //Default modifier access
    void show(){
        tambahexp(); //Contoh mengakses private methods
        System.out.println("Nama : " + this.name);
        System.out.println("Exp : " + this.exp);
        System.out.println("Health : " + this.health); //Membaca tetapi didalam class
    }

    //Public
    public void setNama(String namaBaru){
        this.name = namaBaru;
    }

    //Private
    private void tambahexp(){
        this.exp += 100;
    }
}

public class Main{
    public static void main(String[] args){

        Player player1 = new Player("Anarchy", 0, 100);

        //Default
        System.out.println("===Default===");
        System.out.println(player1.name);
        player1.name = "343";
        System.out.println(player1.name + "\n\n");

        //Public
        System.out.println("===Public====");
        System.out.println(player1.exp);
        player1.exp = 100;
        System.out.println(player1.exp + "\n\n\n");

        //Private, tidak dapat diakses
        // System.out.println("===Private===");
        // System.out.println(player1.health);
        // player1.health = 100;
        // System.out.println(player1.health);



        //Methods

        //Default
        System.out.println("===Default Methods===");
        player1.show();


        //Public
        System.out.println("\n\n\n===Public====");
        player1.setNama("Anarchy343");
        player1.show();

        //Private(Tidak bisa diakses)
        //player1.tambahexp();
    }
}