#include <iostream>

using namespace std;

int main()
{
    int h;
    string pyramid;
    cout << "Enter pyramid`s height (h, 2 < h < 9): ";
    cin >> h;
    if (h <= 2 || h >= 9)
        return 1;
    for (int i = 1, j = -1; i <= h; i++, j+=2){
        for(int q = 0; q < h-i; q++)
         pyramid += " ";
        if (i != 1)
            pyramid += "*";
        if(i!=h)
            for (int k = 0; k < j; k++)
                pyramid += " ";
        else
            for (int k = 0; k < j; k++)
                pyramid += "*";
        pyramid += "*\n";
    }
    cout << pyramid;
    return 0;
}
