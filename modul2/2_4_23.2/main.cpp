#include <iostream>

using namespace std;

int main()
{
    unsigned short u, q = 0;
    unsigned short n = 32768;

    cin >> u;
    for(int i = 0; i < 16; ++i){
        if(n & u)
            q |= 32768 / n;
        n >>= 1;
    }
    if(q==u)
        cout << u << " is a bitwise palindrome" << endl;
    else
        cout << u << " is not a bitwise palindrome" << endl;
    return 0;
}
