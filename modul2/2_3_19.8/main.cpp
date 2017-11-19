#include <iostream>

using namespace std;

int main()
{
    int n;
	cin >> n;
	double res = 1;

	for (size_t i = 1; i <= n; i++)
	{
		res *= i;
	}
    cout.precision(0);
	cout << fixed << res << endl;

    return 0;
}
