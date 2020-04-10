#include <iostream>

using namespace std;

int main()
{
	float a, b, hasil;
	char aritmatika;

	cout << "Selamat Datang di Program Calculator \n \n";

	cout << "Masukkan Nilai Pertama : ";
	cin >> a;

	cout << "Pilih Operator *, /, +, - = ";
	cin >> aritmatika;

	cout << "Masukkan Nilai Kedua : ";
	cin >> b;

	cout << "\n\nHasil dari\n";

	cout << a << " " << aritmatika << " " << b << " = ";

	if (aritmatika == '+')
	{
		hasil = a + b;
	} else if (aritmatika == '-')
	{
		hasil = a - b;
	} else if (aritmatika == '*')
	{
		hasil = a * b;
	} else if (aritmatika == '/')
	{
		hasil = a / b;
	} else {
		cout << "Operator Anda Salah" << endl;
	}

	cout << hasil << endl;



	cin.get();
	return 0;
}

/*
#include <iostream>

using namespace std;

int main()
{
	float a, b, hasil;
	char aritmatika;

	cout << "Selamat Datang di Program Calculator \n \n";

	cout << "Masukkan Nilai Pertama : ";
	cin >> a;

	cout << "Pilih Operator *, /, +, - = ";
	cin >> aritmatika;

	cout << "Masukkan Nilai Kedua : ";
	cin >> b;

	cout << "\n\nHasil dari\n ";

	cout << a << " " << aritmatika << " " << b << " = ";

	switch (aritmatika)
	{
	case '+' :
		cout << a + b << endl;
		break;

	case '-' :
		cout << a - b << endl;
		break;

	case '*' :
		cout << a * b << endl;
		break;

	case '/' :
		cout << a / b << endl;
		break;
	}



	cin.get();
	return 0;
}

*/
