#include <iostream>

using namespace std;

int main()
{
	int a;

	cout << "Masukkan nilai anda = ";
	cin >> a;

	if (a == 80)
	{
		cout << "Nilai Anda " << a << endl;
	}

	else if (a == 90)
	{
		cout << "Nilai Anda " << a << endl;
	}
	else {
		cout << "Maaf Nilai Anda Tidak 80 atau 90" << endl;
	}


	cin.get();
	return 0;
}