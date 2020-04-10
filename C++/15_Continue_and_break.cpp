#include <iostream>

using namespace std;

int main()
{

	for (int a = 0; a <=10; a++ )
	{
		if (a == 5) {
			//continue;
			break;
		}
		cout << a << endl;
	}

	cin.get();
	return 0;
}
