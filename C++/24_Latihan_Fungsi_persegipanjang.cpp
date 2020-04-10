#include <iostream>
using namespace std;


//Fungsi Menghitung Luas Persegi Panjang
double hitung_luas(double panjang, double lebar)
{
  double luas = panjang * lebar;
  return luas;
}


//Fungsi Menghhitung Keliling Persegi Panjang
double hitung_keliling(double panjang, double lebar)
{
  double keliling = (2 * panjang) + (2 * lebar);
  return keliling;
}


void tampilkan_luas(double panjang, double lebar)
{
  cout << "\nLuas dengan Void = ";
  cout << hitung_luas(panjang,lebar) << endl;
}

void tampilkan_keliling(double panjang, double lebar)
{
  cout << "Keliling dengan Void = ";
  cout << hitung_keliling(panjang,lebar) << endl;
}


int main()
{
  double panjang, lebar, luas, keliling;

  cout << "Input Panjang = ";
  cin >> panjang;

  cout << "Input Lebar = ";
  cin >> lebar;

/*
  cout << "\nLuas Persegi Panjang = ";
  luas = hitung_luas(panjang,lebar);
  cout << luas << endl;
*/
  tampilkan_luas(panjang,lebar);

/*
  cout << "\nKeliling Persegi Panjang = ";
  keliling = hitung_keliling(panjang,lebar);
  cout << keliling << endl;
*/
  tampilkan_keliling(panjang,lebar);

  cin.get();
  return 0;
}
