#include <iostream>

using namespace std;

int main()
{
    int line;
	double a, b, res;
	do
	{
		cout << "Enter a: " << endl;
		cin >> a;
		cout << "Enter a func" << endl;
		cin >> line;
		cout << "Enter b: " << endl;
		cin >> b;
		switch (line)
		{
		case 1: res = a + b;
			cout << "Result a + b = " << res << endl;
			break;
		case 2: res = a - b;
			cout << "Result a - b = " << res << endl;
			break;
		case 3: res = a * b;
			cout << "Result a * b = " << res << endl;
			break;
		case 4: res = a / b;
			cout << "Result a / b = " << res << endl;
			break;
		default: break;
		}

	} while (line != 0);
    return 0;
}
