#include <iostream>
#include <string.h>
using namespace std;

int main(){
  string kalimat_input;

  cout << "Input Kalimat = ";
  getline(cin,kalimat_input);

  cout << "Nama Anda = " << kalimat_input << endl;



  //Jumlah Kata Dari Input
  int posisi = 0;
  int jumlah = 0;

  while(true){
    posisi = kalimat_input.find(" ",posisi + 1);
    jumlah++;

    cout << "Posisi = " << posisi << " Jumlah = " << jumlah << endl;
    if (posisi < 0){
      break;
    }
  }

  cout << endl;

  cout << "Jumlah kata = " << jumlah << endl;


  cin.get();
  return 0;
}
