#include <iostream>
using namespace std;

int main(){

  int a = 250;

  cout << "Nilai a = " << a << endl;
  cout << "Alamat a = " << &a << endl << endl;

  int &b = a;

  cout << "Nilai b = " << b << endl;
  cout << "Alamat b = " << &b << endl << endl;

  a = 20;

  cout << "Nilai a = " << a << endl;
  cout << "Nilai b = " << b << endl << endl;

  b = 260;

  cout << "Nilai a = " << a << endl;
  cout << "Nilai b = " << b << endl << endl;



  cin.get();
  return 0;
}
