#include <iostream>
#include <string.h>
using namespace std;

int main(){

  int a,b;
  string hasil1, hasil2, output;

  hasil1 = "Selamat Pagi";
  hasil2 = "Selamat Malam";

  a = 5;
  b = 7;


  output = (a < b) ? hasil1 : hasil2;

  cout << output << endl;



  cin.get();
  return 0;
}
