#include <iostream>

using namespace std;

int main()
{
	int a = 5;
	int b = 5;

	bool hasil1, hasil2, hasil3, hasil4, hasil5, hasil6;

	//Sebanding
	hasil1 = (a == b);
	cout << hasil1 << endl;

	//Tidak Sebanding
	hasil2 = (a != b);
	cout << hasil2 << endl;

	//Kurang Dari
	hasil3 = (a < b);
	cout << hasil3 << endl;

	//Lebih Dari
	hasil4 = (a > b);
	cout << hasil4 << endl;

	//Kurang Dari Sama Dengan
	hasil5 = (a <= b);
	cout << hasil5 << endl;

	//Lebih Dari Sama Dengan
	hasil6 = (a >= b);
	cout << hasil6 << endl;

	cin.get();
	return 0;
}