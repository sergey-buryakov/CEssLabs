#include <iostream>

using namespace std;

int main()
{
    int banknotes[]={50, 20, 10, 5 ,1};
    int clientMoney,money=0;
    cout<<"Enter needed money: ";
    cin>>clientMoney;
    for(int i=0; money!=clientMoney;){
        if(money+banknotes[i]>clientMoney)
        {
            ++i;
            continue;
        }
        else
            money+=banknotes[i];
        cout<<banknotes[i]<<' ';
    }
    return 0;
}
