#include <iostream>

using namespace std;

int main()
{
    unsigned long long a = 1L;
    int n;
    cin >> n;
    for(int i = 0; i < n-1; ++i)
        a*=2;
    cout << a*2;
    return 0;
}
