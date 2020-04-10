#include <iostream>
using namespace std;

void kuadrat(int *variabel){
  *variabel = (*variabel) * (*variabel);
}


int main(){

  int a = 50;

  cout << "Nilai a = " << a << endl;
  cout << "Adress a = " << &a << endl << endl;

  kuadrat(&a);

  cout << "Nilai a = " << a << endl;


  return 0;
}
