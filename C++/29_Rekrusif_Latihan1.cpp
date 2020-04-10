#include <iostream>
using namespace std;

int faktorial(int n);

int main()
{
  int angka, hasil;

  cout << "Faktorial dari = ";
  cin >> angka;

  hasil = faktorial(angka);

  cout << "\nNilai = " << hasil << endl;

  cin.get();
  return 0;
}

int faktorial(int n)
{
  if (n <= 1) {
    cout << n;
    return n;
  }
  else
  {
    cout << n << "*";
    return n * faktorial(n-1);
  }


}
