#include <iostream>
#include <string.h>
using namespace std;

int main(){

  string kata("ucup");
  string input;

  //Perbandingan String
  if(kata == "ucup"){
    cout << "Berhasil" << endl;
  }else{
    cout << "Gagal" << endl;
  }


  while(true){
    cout << "Tebak Nama = ";
    cin >> input;

    if(input == kata){
      cout << "Tebakan Anda Benar" << endl;
      break;
    }

    cout << "Tebakan Anda Salah" << endl;
  }


  cin.get();
  return 0;
}
