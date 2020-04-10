#include <iostream>

using namespace std;

int main()
{
	int a = 3;
	int b = 2;

	bool hasil;

	cout << "Untuk Not" << endl;
	hasil = !(a == 3);
	cout << hasil << endl;

	cout << "Untuk And" << endl;
	hasil = (a == 5) and (b == 2);
	cout << hasil << endl;

	cout << "Untuk Or" << endl;
	//Or bisa diganti dengan lambang ||
	hasil = (a == 5) || (b == 2);
	cout << hasil << endl;


	cin.get();
	return 0;
}
