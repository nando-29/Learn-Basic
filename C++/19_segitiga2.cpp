#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "Input Nilai ke-n = ";
	cin >> n;

	cout << "\n-----Segitiga Ketiga-----\n";

	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j < i; j++)
    {
      cout << " ";
    }
    for(int k = n; k >= i; k--)
    {
      cout << "*";
    }
    cout << endl;
	}


	cin.get();
	return 0;
}
