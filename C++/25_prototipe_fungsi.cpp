#include <iostream>
using namespace std;


double hitung_luas(double panjang, double lebar);
void println(double x);


int main()
{
  double panjang, lebar, luas;
  cin >> panjang;
  cin >> lebar;

  luas = hitung_luas(panjang,lebar);

  println(luas);

  cin.get();
  return 0;
}



double hitung_luas(double panjang, double lebar)
{
  return panjang * lebar;
}

void println(double x)
{
  cout << "Void = " << x << endl;
}
