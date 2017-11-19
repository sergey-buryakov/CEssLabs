#include <iostream>

using namespace std;

int main()
{
    int year,day,month;

    cin >> year >> day >> month;

    month -= 2;
    if(month < 0){
        month += 12 ;
        --year;
    }
    month *= 83/32;
    month += day + year + year/4 - year/100 + year/400;
    cout << (month%7);
    return 0;
}
