#include <iostream>
#include <string.h>
using namespace std;

void printdata(int val){
  cout << val << endl;
}

int main(){

  int a, b, c;

  a = ( b=4, cout << "b = "   ,printdata(b)  , c=6, cout << "c = ", printdata(c)  , (b+c) );


  cout << "a = " << a << endl;






  cin.get();
  return 0;
}
