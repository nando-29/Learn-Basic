#include <iostream>
using namespace std;

int fibonacci(int n);

int main()
{
  int angka, hasil;

  cout << "Bilangan ke-n = ";
  cin >> angka;

  hasil = fibonacci(angka);

  cout << "hasil = " << hasil;



  cin.get();
  return 0 ;
}


int fibonacci(int n)
{
  if(n == 0 || n == 1)
  {
    return n;
  }
  else
  {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }


}
