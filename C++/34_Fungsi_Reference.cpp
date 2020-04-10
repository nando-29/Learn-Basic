#include <iostream>
using namespace std;

void fungsi(int &);
void kuadrat(int &);

int main(){
  int a = 5;

  cout << "Adress a = " << &a << endl;
  cout << "  Nilai a = " << a << endl << endl;

  int &b = a;


  fungsi(a);

  cout << "\b  Nilai b = " << b << endl << endl;



  kuadrat(a);
  cout << "Nilai Kuadrat = " << a << endl;

  cin.get();
  return 0;
}



void fungsi(int &b){
  b = 10;
  cout << "Adress b = " << &b << endl;
  cout << "  Nilai b = " << b << endl;
}

void kuadrat(int &nilairef){
  nilairef = nilairef * nilairef;
}
