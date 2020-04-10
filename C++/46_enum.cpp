#include <iostream>
using namespace std;


enum warna{merah, putih, hitam, coklat = 5, kuning, biru};


int main(){
  warna kain;

  kain = kuning;

  cout << kain << endl;



  cin.get();
  return 0;
}
