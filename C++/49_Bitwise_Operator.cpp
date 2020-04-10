#include <iostream>
#include <bitset>
#include <string.h>
using namespace std;

void printbinary(unsigned short var, string nama){
  cout << nama << " = " << bitset<8>(var) << endl;
}



int main(){

  unsigned short a = 6;
  unsigned short b = 10;
  unsigned short c;



  cout << "&  Bitwise AND" << endl;
  c = a & b;
  printbinary(a,"a");
  printbinary(b,"b");
  printbinary(c,"c");
  cout << "c = " << c << endl;

  cout << endl << endl;

  cout << "|  Bitwise Inclusive OR" << endl;
  c = a | b;
  printbinary(a,"a");
  printbinary(b,"b");
  printbinary(c,"c");
  cout << "c = " << c << endl;

  cout << endl << endl;

  cout << "^  XOR Bitwise Exclusive OR" << endl;
  c = a ^ b;
  printbinary(a,"a");
  printbinary(b,"b");
  printbinary(c,"c");
  cout << "c = " << c << endl;

  cout << endl << endl;

  cout << "~  NOT" << endl;
  c = ~a;
  printbinary(a,"a");
  printbinary(c,"c");
  cout << "c = " << c << endl;

  cout << endl << endl;

  cout << "<<  SHL Shift Bits Left" << endl;
  c = a << 2;
  printbinary(a,"a");
  printbinary(c,"c");
  cout << "c = " << c << endl;

  cout << endl << endl;

  cout << ">>  SHR Shift Bits Right" << endl;
  c = a >> 1;
  printbinary(a,"a");
  printbinary(c,"c");
  cout << "c = " << c << endl;





  cin.get();
  return 0;
}

/*
         -----Bitwise Operator-----
1. &        AND Bitwise AND
2. |        OR Bitwise Inclusive OR
3. ^        XOR Bitwise Exclusive OR
4. ~        NOT
5. <<       SHL Shift Bits Left
6. >>       SHR Shift Bits Right




*/
