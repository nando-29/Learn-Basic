#include <iostream>
using namespace std;


double luas(double panjang, double lebar = 2);

int main()
{

  cout << "Luas Persegi Panjang = " << luas(4,9) << endl;
  cout << "Luas Persegi Panjang = " << luas(4) << endl;


  cin.get();
  return 0;
}

double luas(double panjang, double lebar)
{
  return panjang * lebar;
}
