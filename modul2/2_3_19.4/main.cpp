#include <iostream>

using namespace std;

int main()
{
    int n;
	double res = 1;
	cin >> n;
	n %= 64;
	for (int i = 0; i < n; i++)
		res /= 2.;
	cout << res << endl;
	return 0;
}
