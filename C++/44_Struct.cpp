#include <iostream>
using namespace std;


struct buah{
  string warna;
  float berat;
  int harga;
  string rasa;

};

int main(){
  //Struct => data yang dibentuk oleh beberapa data

  buah apel;
  buah jeruk;

  apel.warna = "Merah";
  apel.berat = 12.5f;
  apel.harga = 50000;
  apel.rasa = "Manis";

  jeruk.warna = "kuning";
  jeruk.berat = 9.5f;
  jeruk.harga = 25000;
  jeruk.rasa = "Asam";


  cout << "-----APPEL-----" << endl;
  cout << apel.warna << endl;
  cout << apel.berat << endl;
  cout << apel.harga << endl;
  cout << apel.rasa << endl;

  cout << endl;

  cout << "-----JERUK-----" << endl;
  cout << jeruk.warna << endl;
  cout << jeruk.berat << endl;
  cout << jeruk.harga << endl;
  cout << jeruk.rasa << endl;




  cin.get();
  return 0;
}
