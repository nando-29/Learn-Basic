#include <iostream>
#include <string.h>
using namespace std;

int main(){

  string kalimat1("Dayat suka olahraga supaya sehat");
  string kalimat2("Ucup suka makan pisang di pagi hari");

  cout << "1 : " << kalimat1 << endl;
  cout << "2 : " << kalimat2 << endl << endl;

  //Substring, mengambil string ditengah-tengah
  //substr(index,panjang)
  cout << kalimat1.substr(11,8) << endl;
  cout << kalimat2.substr(16,6) << endl << endl;


  //Mencari posisi dari Substring
  cout << "Posisi olahraga = " << kalimat1.find("olahraga") << endl;
  cout << "Posisi pisang = " << kalimat2.find("pisang") << endl << endl;

  int a = kalimat1.find("ya");
  cout << a << endl;

  cout << kalimat1.find("ya", a+1) << endl << endl;



  //Mncari posisinya dari belakang
  cout << kalimat2.rfind("an");




  cin.get();
  return 0;
}
