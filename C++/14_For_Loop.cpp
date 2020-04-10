#include <iostream>

using namespace std;

int main()
{
	int total = 0;

	for (int c = 10; c < 20; c += 3)
	{
		total += c;
		cout << "\nSelamat Malam" << c << "||" << c << endl;
	}

	cin.get();
	return 0;
}
