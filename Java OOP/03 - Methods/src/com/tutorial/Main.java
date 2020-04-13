package com.tutorial;

class Mahasiswa{
    String nama = "Nama asli";
    String kelas;

    Mahasiswa(String nama, String kelas){
        this.nama = nama;
        this.kelas = kelas;
    }

    //Method tanpa return dan tanpa parameter
    void show(){
        System.out.println("Nama : " + this.nama);
        System.out.println("Kelas : " + this.kelas);
    }

    //Method tanpa return dan dengan parameter

    void setNama(String nama){
        this.nama = nama;
        System.out.println("Nama : " + this.nama);
        System.out.println("Kelas : " + this.kelas);
    }


    //Method dengan return dan tanpa parameter

    String getNama(){
        return this.nama;
    }

    String getKelas(){
        return this.kelas;
    }
}



public class Main{

    public static void main(String[] args) {

        Mahasiswa data1 = new Mahasiswa("Nando", "H");
        data1.show();

        System.out.println();

        data1.setNama("Budi");

        System.out.println();

        System.out.println(data1.getNama());
        System.out.println(data1.getKelas());

    }
}