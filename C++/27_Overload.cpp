#include <iostream>
#include <math.h>
using namespace std;

//Overload = menimpa

int luas_kotak(int panjang, int lebar)
{
  int luas = panjang * lebar;
  return luas;
}

int luas_kotak(int sisi)
{
  int luas = pow(sisi,2);
  return luas;
}

double luas_kotak(double sisi)
{
  double luas = pow(sisi,2);
  return luas;
}

int main()
{

  cout << "Luas kotak 4x6 = " << luas_kotak(4,6) << endl;
  cout << "Luas kotak 2x2 = " << luas_kotak(2) << endl;
  cout << "Luas kotak 2.5x2.5 " << luas_kotak(2.5) << endl;


  cin.get();
  return 0;
}
