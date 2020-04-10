#include <iostream>
using namespace std;

int main(){

  //Membuat Array
  int nilai[5];
  nilai[0] = 0;
  nilai[1] = 1;
  nilai[2] = 2;
  nilai[3] = 3;
  nilai[4] = 4;

  cout << &nilai[0] << " Nilainya adalah = " << nilai[0] << endl;
  cout << &nilai[1] << " Nilainya adalah = " << nilai[1] << endl;
  cout << &nilai[2] << " Nilainya adalah = " << nilai[2] << endl;
  cout << &nilai[3] << " Nilainya adalah = " << nilai[3] << endl;
  cout << &nilai[4] << " Nilainya adalah = " << nilai[4] << endl << endl;


  int *ptr = nilai;
  *(ptr + 2) = 100;

  nilai[3] = 90;


  cout << &nilai[0] << " Nilainya adalah = " << nilai[0] << endl;
  cout << &nilai[1] << " Nilainya adalah = " << nilai[1] << endl;
  cout << &nilai[2] << " Nilainya adalah = " << nilai[2] << endl;
  cout << &nilai[3] << " Nilainya adalah = " << nilai[3] << endl;
  cout << &nilai[4] << " Nilainya adalah = " << nilai[4] << endl << endl;


  cout << "Ukuran = " << sizeof(nilai) << " byte" << endl;
  cout << "Jumlah Member Array = " << sizeof(nilai)/sizeof(int) << endl;


  return 0;
}
