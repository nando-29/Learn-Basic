#include <iostream>
using namespace std;

int f(int x)
{
    int y;
    y = x * x;

    return y;
}

void tampilkan (int input)
{
  cout << "Dengan Void = ";
  cout << input << endl;
}


int main()
{
  int x, hasil;
  int a, b, hasil2;

  cout << "Input Bilangan x = ";
  cin >> x;

  hasil = f(x);

  tampilkan(hasil);




  cin.get();
  return 0;
}
