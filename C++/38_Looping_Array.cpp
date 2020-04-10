#include <iostream>
#include <array>
using namespace std;

int main(){

  int arraynilai[10] = {0,1,2,3,4,5,6,7,8,9};
  //array <int,10> arraynilai = {0,1,2,3,4,5,6,7,8,9};

  for(int nilai : arraynilai){
    cout << "Adress " << &nilai << "   " << nilai << endl;
  }

  cout << endl;

  for(int nilai2 : arraynilai){
    nilai2 *= 2;
    cout << "Adress " << &nilai2 << "   " << nilai2 << endl;
  }

  cin.get();
  return 0;
}
