#include <iostream>
#include <string.h>
using namespace std;

int main(){

  string kalimat1("Aku suka kamu suka, siapa? dia!");
  string kalimat2("Wakanda forevah!!!");

  cout << "1 : " << kalimat1 << endl;
  cout << "2 : " << kalimat2 << endl << endl;


  //Swap string
  cout << "-----Swap String-----" << endl;
  kalimat1.swap(kalimat2);
  cout << "1 : " << kalimat1 << endl;
  cout << "2 : " << kalimat2 << endl << endl;



  //Replace String
  cout << "-----Replace String-----" << endl;
    kalimat2.replace(27,3,"Kamu");
    int posisi = kalimat1.find("ah");
    kalimat1.replace(posisi,2,"er");

  cout << "1 : " << kalimat1 << endl;
  cout << "2 : " << kalimat2 << endl << endl;


  //Insert string
  cout << "-----Insert String-----" << endl;
    kalimat1.insert(8,"wakanda ");
  cout << "1 : " << kalimat1 << endl;
  cout << "2 : " << kalimat2 << endl << endl; 



  cin.get();
  return 0;
}
