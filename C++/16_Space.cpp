#include <iostream>

using namespace std;

int main()
{
	char nama[35];
	char kelas[10];

	cout << "Input nama anda = ";
	cin.getline(nama, 35);

	cout << "Kode = ";
	cin.getline(kelas, 10);

	cout << "Nama : ";
	cout << nama << kelas << endl;

	cin.get();
	return 0;
}
