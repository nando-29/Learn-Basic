#include <iostream>
#include <array>
using namespace std;


int main(){

  //Membuat array dengan menggunakan standard library
  //Array <int, jumlah array> nama array

  array < int, 5 > nilai;

  for(int i = 0; i <= 4; i++){
    nilai[i] = i;

    cout << "Nilai [" << i << "] = " << nilai[i];
    cout << " Adress " << &nilai[i] << endl;
  }

  cout << endl;

  //Ukuran Array
  cout << "Ukuran = " << nilai.size() << endl;

  //Adress awal dari array
  cout << "Adress Awal = " << nilai.begin() << endl;

  //Adress akhir dari array
  cout << "Adress Akhir = " << nilai.end() << endl;

  //Nilai dengan index
  cout << "Nilai ke-2 = " << nilai.at(2) << endl;

  return 0;
}
