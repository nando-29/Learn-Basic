#include <iostream>
#include <string.h>
using namespace std;

struct actor{
  string nama;
  int tahun_lahir;
};

struct film{
  string judul;
  string genre;
  int tahun;
  //struct actor
  actor pemeran_1;
  actor pemeran_2;
};


int main(){

  actor actor1, actor2;
  film fast;

  //Buat actor 1
  actor1.nama = "Brian O'Connor";
  actor1.tahun_lahir = 1980;

  //Buat actor 2
  actor2.nama = "Roman Pearce";
  actor2.tahun_lahir = 1970;

  //Buat film

  fast.judul = "Fast and Furious";
  fast.genre = "Action";
  fast.tahun = 2001;
  fast.pemeran_1 = actor1;
  fast.pemeran_2 = actor2;

  cout << fast.judul << endl;
  cout << fast.genre << endl;
  cout << fast.tahun << endl;
  cout << fast.pemeran_1.nama << endl;
  cout << fast.pemeran_1.tahun_lahir << endl;
  cout << fast.pemeran_2.nama << endl;
  cout << fast.pemeran_2.tahun_lahir << endl;




  cin.get();
  return 0;
}
