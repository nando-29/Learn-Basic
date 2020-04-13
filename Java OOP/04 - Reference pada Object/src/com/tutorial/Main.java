package com.tutorial;


class Buku{
    String judul;
    String penulis;

    Buku(String judul, String penulis){
        this.judul = judul;
        this.penulis = penulis;
    }

    void show(){
        System.out.println("\nJudul\t: " + judul);
        System.out.println("Penulis\t: " + penulis);
    }
}


public class Main{

    public static void main(String[] args) {
        Buku buku1 = new Buku("Kambing Jantan", "Raditya Dika");
        buku1.show();


        //Menampilkan Address
        String addressBuku1 = Integer.toHexString(System.identityHashCode(buku1));
        System.out.println(addressBuku1);

        System.out.println(buku1.judul);
    }
}