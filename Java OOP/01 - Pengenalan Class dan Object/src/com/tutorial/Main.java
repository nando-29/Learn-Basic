package com.tutorial;


class Mahasiswa{
    String nama;
    String npm;
    String jurusan;
    double ipk;
}




public class Main{

    public static void main(String[] args) {

        Mahasiswa mhs1 = new Mahasiswa();
        mhs1.nama = "Fernando";
        mhs1.npm = "193510711";
        mhs1.jurusan = "Teknik Informatika";
        mhs1.ipk = 3.88;

        System.out.println(mhs1.nama);
        System.out.println(mhs1.npm);
        System.out.println(mhs1.jurusan);
        System.out.println(mhs1.ipk);


        System.out.println();

        Mahasiswa mhs2 = new Mahasiswa();
        mhs2.nama = "Superman";
        mhs2.npm = "1935119877";
        mhs2.jurusan = "Teknik Sipil";
        mhs2.ipk = 3.98;

        System.out.println(mhs2.nama);
        System.out.println(mhs2.npm);
        System.out.println(mhs2.jurusan);
        System.out.println(mhs2.ipk);
    }
}