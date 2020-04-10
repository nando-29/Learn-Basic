#include <iostream>
using namespace std;

int main()
{
  int a = 5;
  //int *ptr_a = &a;
  int *ptr_a = nullptr;
  ptr_a = &a;

  //Pointer akan selalu bertipe int

  cout << "Nilai dari a : " << a << endl;
  cout << "Alamat dari a : " << ptr_a << endl;

  //Deferencing => Mengambil data dari sebuah pointer

  cout << "Mengambil nilai dari ptr_a : " << *ptr_a << endl;


  cin.get();
  return 0;
}
