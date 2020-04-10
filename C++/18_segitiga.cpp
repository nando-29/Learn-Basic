#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "Input Nilai ke-n = ";
	cin >> n;

	cout << "\n-----Segitiga Pertama-----\n";

	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}





	cout << "\n-----Segitiga Kedua-----\n";

	for(int i = 1; i <= n; i++)
	{
		for(int j = n; j >= i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}


	cin.get();
	return 0;
}
