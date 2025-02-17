package com.tutorial;

class Player{
    private static int numberOfPlayer;

    private String name;

    Player(String name){
        this.name = name;
        Player.numberOfPlayer++;
    }

    void show(){
        System.out.println("Player name = " + this.name);
    }

    //Static Methods
    static void showNumberOfPlayer(){
        System.out.println("Number of players = " + Player.numberOfPlayer);
    }
}

public class Main {

    public static void main(String[] args) {
	    Player player1 = new Player("Saitama");
	    Player player2 = new Player("All Mighty");

	    player1.show();
	    player2.show();
        Player.showNumberOfPlayer();

    }
}
