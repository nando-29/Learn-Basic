#include <iostream>
#include <string>
using namespace std;

int main(){
  string kata("Cat");

  //Mengambil Data String
  cout << kata << endl;

  //Mengambil Karakter Berdasarkan Index
  cout << "Index ke-0 = " << kata[0] << endl;
  cout << "Index ke-1 = " << kata[1] << endl;
  cout << "Index ke-2 = " << kata[2] << endl << endl;

  //Merubah Karakter Pada Index
  kata[2] = 'B';
  cout << "Hasilnya = " << kata << endl;

  //Menyambung atau Concatenation
  string kata2(kata + "DOG");
  cout << "Hasilnya ere = " << kata2 << endl;

  cout << endl;

  kata.append(kata2);
  cout << kata << endl;

  kata += kata2;

  cout << kata << endl;

  cin.get();
  return 0 ;
}
