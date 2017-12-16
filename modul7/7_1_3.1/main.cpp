#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0, c = 0;
	cin >> a;
	cin >> b;
	try
	{
		if (b == 0) throw string("Your input is not valid, you can't divide by zero");
		c = a / b;
		cout << c << endl;
	}
	catch (string e)
	{
		cout << e << endl;
	}
    return 0;
}
