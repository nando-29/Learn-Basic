#include <iostream>

using namespace std;

int main()
{
	int a = 1;


	do {
		cout << "Selamat Hari Jum'at" << a << endl;
		a += 4;
	} while (a < 10);

	cin.get();
	return 0;
}
