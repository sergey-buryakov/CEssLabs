#include <iostream>

using namespace std;

int main()
{
    int x1, x2;
    cout << "Enter first: ";
    cin >> x1;
    cout << "Enter second: ";
    cin >> x2;
    if (x1-x2<0.000001 && x2-x1<0.000001)
        cout << "Results are equal (by 0.000001 epsilon)";
    else
        cout << "Results are not equal (by 0.000001 epsilon)";
    return 0;
}
