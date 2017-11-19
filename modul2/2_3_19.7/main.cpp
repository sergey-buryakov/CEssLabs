#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int first = 1, second = 1,third;
    if( n == 1 | n == 2)
        cout << "1";
    else {
        for(int i = 0; i < n-2; i++){
        third = first + second;
        first = second;
        second = third;
        }
        cout << third;
    }

    return 0;
}
