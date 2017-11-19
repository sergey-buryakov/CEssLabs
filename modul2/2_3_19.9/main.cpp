#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter positive odd integer value:" << endl;
    cin >> n;
    if(n < 0 || n % 2 != 1)
        cout << "Sorry but u have to enter positive odd integer value" << endl;
    else if(n == 1)
        cout << 1;
    else cout << 1 + 4 * ((n - 2) / 2 + 1) * ((n - 2) / 2 + 1) << endl;
    return 0;
}
