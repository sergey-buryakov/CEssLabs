#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(0<=a & 0<=b & 0<=c & 0<=d & a<=255 & b<=255 & c<=255 & d<=255)
        cout<<a<<"."<<b<<"."<<c<<"."<<d;
    else
        cout<<
        "Number must be in range [0,255]";
    return 0;
}
