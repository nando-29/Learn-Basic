#include <iostream>
using namespace std;

int f(int x)
{
    int y;
    y = 2 * x + 10;

    return y;
}

int f2(int a, int b)
{
   int c;
   c = a + b;

   return c;
}


int main()
{
  int x, hasil;
  int a, b, hasil2;

  cout << "Input Bilangan x = ";
  cin >> x;

  hasil = f(x);

  cout << hasil << endl;

  cout << "-------------------------------------------------------------" << endl;

  cout << "Input nilai a = ";
  cin >> a;
  cout << "Input nilai b = ";
  cin >> b;

  hasil2 = f2(a,b);

  cout << hasil2 << endl;



  cin.get();
  return 0;
}
