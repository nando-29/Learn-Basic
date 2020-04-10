#include <iostream>
using namespace std;


int pangkat(int a, int b)
{
  int hasil = a;
  for(int i = 1; i < b; i++)
  {
    hasil = hasil * a;
  }
  return hasil;
}

int pangkatrekursif(int a, int b)
{
  if(b <= 1)
  {
    cout << "Akhir Dari Rekrusif\n";
    return a;
  }
  else
  {
    cout << "Rekursif :\n";
    return a * pangkatrekursif(a,(b-1));
  }

}



int main()
{
  int a, b;

  cout << "Angka = ";
  cin >> a;

  cout << "Pangkat = ";
  cin >> b;

  cout << "Hasil = " << pangkat(a,b) << endl;
  cout << pangkatrekursif(a,b) << endl;


  return 0;
}
