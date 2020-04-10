#include <iostream>
#include <array>
using namespace std;

int main(){
  array <int,6> baba = {1,2,3,4,5,6};

  for(int nando : baba){
    nando *= 10;
    cout << "Adress " << &nando << "  Nilai = " << nando << endl;
  }


  cin.get();
  return 0;
}
