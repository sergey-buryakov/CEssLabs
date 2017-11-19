#include <iostream>

using namespace std;

struct TIME{
    int hour;
    int minute;
};
int main()
{
    int event;
    TIME time;
    while(1==1){
        cout<<"Enter hours: ";
        cin>>time.hour;
        if(time.hour<24&&time.hour>=0)
            break;
        cout<<"Hours must be in range [0;23]\n";
    }
    while(1==1){
        cout<<"Enter minutes: ";
        cin>>time.minute;
        if(time.minute<60&&time.minute>=0)
            break;
        cout<<"Minutes must be in range [0;59]\n";
    }
    cout<<"Enter duration event in minutes: ";
    cin>>event;
    time.hour=((event+time.minute)/60+time.hour)%24;
    time.minute=(event+time.minute)%60;
    cout<<time.hour<<":"<<time.minute;

    return 0;
}
