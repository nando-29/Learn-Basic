package com.tutorial;

class Data{
    public int intPublic;
    private int intPrivate;
    private double doublePrivate;

    public Data(){
        this.intPublic = 0;
        this.intPrivate = 5;
    }

    //Getter
    public int getIntPrivate(){
        return this.intPrivate;
    }

    //Setter
    public void setDoublePrivate(double newDouble){
        this.doublePrivate = newDouble;
    }

    void show(){
        System.out.println(this.doublePrivate);
    }
}

public class Main{
    public static void main(String[] args){

        Data myobject = new Data();
        //Public
        myobject.intPublic = 10; //write
        System.out.println("Public : " + myobject.intPublic); //read

        //Read only(kita bisa menggunakan GETTER)
        System.out.println("Getter : " + myobject.getIntPrivate());

        //Write only (Kita hanya bisa menulis saja SETTER)
        myobject.setDoublePrivate(0.05);
        myobject.show();
    }
}