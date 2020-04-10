#include <iostream>

using namespace std;

int main()
{
	int a = 6;
	int b = 4;

	int hasil;

	hasil = a + b;
	cout << a << " + " << b << " = " << hasil << endl;

	hasil = a - b;
	cout << a << " - " << b << " = " << hasil << endl;

	hasil = a * b;
	cout << a << " X " << b << " = " << hasil << endl;

	hasil = a / b;
	cout << a << " : " << b << " = " << hasil << endl;

	hasil = a % b;
	cout << a << " % " << b << " = " << hasil << endl;


	hasil = (a + b) * a;
	cout << hasil << endl;



	float c = 16;
	float d = 5;

	float hasil2;

	hasil2 = c / d;
	cout << c << " / " << d << " = " << hasil2 << endl;


	cin.get();
	return 0;
}
