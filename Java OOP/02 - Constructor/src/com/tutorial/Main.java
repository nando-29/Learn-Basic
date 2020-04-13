package com.tutorial;


//Class dengan constructor
class Mahasiswa{

    //Data member
    String nama;
    String npm;
    String jurusan;

    //Constructor
    Mahasiswa(String inputNama, String inputNpm, String inputJurusan){
        nama = inputNama;
        npm = inputNpm;
        jurusan = inputJurusan;

        System.out.println(nama);
        System.out.println(npm);
        System.out.println(jurusan + "\n");
    }

}

public class Main{

    public static void main(String[] args) {

        Mahasiswa mahasiswa1 = new Mahasiswa("Fernando","193510711","T.Informatika");
        Mahasiswa mahasiswa2 = new Mahasiswa("Putra","19359088","T.Sipil");
        System.out.println(mahasiswa1.nama);
        System.out.println(mahasiswa2.nama);

    }
}