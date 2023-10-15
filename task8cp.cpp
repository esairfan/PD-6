#include <iostream>
#include <windows.h>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int homeTownWeekends);
main()
{
    string yearType;
    int holidays, homeTownWeekends;
    cout<<"Enter year type: ";
    cin>>yearType;
    cout <<"Enter number of holidays: ";
    cin>>holidays;
    cout<<"Enter number of weekends: ";
    cin>>homeTownWeekends;
    cout<<calculateVolleyballGames(yearType,holidays,homeTownWeekends);

}
int calculateVolleyballGames(string yearType, int holidays, int homeTownWeekends)
{
    float freeHoliday, freeWeekend, leapTime, normalTime;
    freeHoliday=holidays*0.667;
    freeWeekend=48-homeTownWeekends;
    freeWeekend=0.75*freeWeekend;
    normalTime=freeHoliday+freeWeekend+homeTownWeekends;
    leapTime=normalTime+normalTime*.15;
    if(yearType=="leap")
    {
        return leapTime;

    }
    if(yearType=="normal")
    {
        return normalTime;
    }
}