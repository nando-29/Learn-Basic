package com.tutorial;
import com.terminal.Console;

public class Main {
    public static void main(String[] args) {
        Player data1 = new Player("Budi");
        Player data2 = new Player("Ucup");
        Player data3 = new Player("Saitama");
        
        data1.setName("Spongebob");
        data1.show();
        data2.show();
        data3.show();

        Console.log("Selamat");
        Console.closing();
    }
}