package com.tutorial;

class Player{
    private String nama;
    private int health;
    private int level;
    private int baseAttack;
    private int incrementHealth;
    private int incrementAttack;
    private Armor armor;
    private Weapon weapon;

    Player(String nama, int health){
        this.nama = nama;
        this.health = health;
        this.level = 1;
        this.baseAttack = 100;
        this.incrementHealth = 20;
        this.incrementAttack = 10;
    }

    public void levelUp(){
        this.level++;
    }

    public void getWeapon(Weapon weapon){
        this.weapon = weapon;
    }

    public void getArmor(Armor armor){
        this.armor = armor;
    }

    public int getTotalHealth(){
        return this.health + (this.level * this.incrementHealth) + this.armor.getArmorHealth();
    }

    public int getTotalAttack(){
        return this.baseAttack + (this.level * this.incrementAttack) + this.weapon.getAttacPower();
    }

    public void display(){
        System.out.println("Nama\t\t = " + this.nama);
        System.out.println("Level\t\t = " + this.level);
        System.out.println("Armor\t\t = " + this.armor.getNamaArmor());
        System.out.println("Weapon\t\t = " + this.weapon.getNamaWeapon());
        System.out.println("Health\t\t = " + getTotalHealth());
        System.out.println("Attack\t\t = " + getTotalAttack());
    }

}


class Armor{
    private String nama;
    private int health;

    Armor(String nama, int health){
        this.nama = nama;
        this.health = health;
    }

    public String getNamaArmor(){
        return this.nama;
    }

    public int getArmorHealth(){
        return this.health;
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

    public int getAttacPower(){
        return this.attack;
    }
}



public class Main{
    public static void main(String[] args) {
        Player data1 = new Player("Goku", 200);
        Armor armor1 = new Armor("Baju Besi", 200);
        Weapon weapon1 = new Weapon("Pedang",100);

        data1.getArmor(armor1);
        data1.getWeapon(weapon1);

        data1.levelUp();
        data1.display();


        System.out.println("\n\n");


        Player data2 = new Player("Naruto", 200);
        Armor armor2 = new Armor("Helm", 200);
        Weapon weapon2 = new Weapon("Perisai",100);

        data2.getArmor(armor2);
        data2.getWeapon(weapon2);


        data2.display();
    }
}