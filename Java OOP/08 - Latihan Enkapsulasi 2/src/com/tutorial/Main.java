package com.tutorial;

class Player{
    private String nama;
    private int baseAttack;

    Weapon weapon;

    Player(String nama){
        this.nama = nama;
        this.baseAttack = 20;
    }

    public String getNama(){
        return this.nama;
    }

    public void getWeapon(Weapon weapon){
        this.weapon = weapon;
    }

    public int getTotalAttack(){
        return this.baseAttack + this.weapon.getAttack();
    }

    public void attack(Player lawan){
        int damage = this.getTotalAttack();
        System.out.println("Player " + this.nama + " attacking " + lawan.getNama() + " with " + damage + "\n");
    }

    public void display(){
        System.out.println("Nama\t\t = " + this.nama);
        System.out.println("Attack\t\t = " + getTotalAttack());
        System.out.println("Weapon\t\t = " + this.weapon.getNamaWeapon() + "\n\n");
    }

}

class Weapon{
    private String nama;
    private int attack;

    Weapon(String nama, int attack){
        this.nama = nama;
        this.attack = attack;
    }

    public String getNamaWeapon(){
        return this.nama;
    }

    public int getAttack(){
        return this.attack;
    }
}

public class Main {
    public static void main(String[] args) {
        //Player
        Player data1 = new Player("Goku");
        Player data2 = new Player("Naruto");
        //Weapon
        Weapon weapon1 = new Weapon("Pedang", 100);
        Weapon weapon2 = new Weapon("Kris", 175);
        //Equip
        data1.getWeapon(weapon1);
        data2.getWeapon(weapon2);


        data1.display();
        data2.display();


        data1.attack(data2);


    }
}