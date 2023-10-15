#include <iostream>
#include <windows.h>
using namespace std;
string calculateHotelPrices(string month, int numberOfStays);
main()
{
    string month;
    int numberOfStays;
    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> numberOfStays;
    cout<<calculateHotelPrices( month,numberOfStays);
}
string calculateHotelPrices(string month, int numberOfStays)
{
    float appartment,studio;
    if(month=="May"||month=="October")
    {
        if (numberOfStays<=7)
        {
            studio=50*numberOfStays;
        }
        if (numberOfStays>7&&numberOfStays<=14)
        {
            studio=studio*.95;
        }
        if(numberOfStays>14)
        {
            studio=(studio/.05)*.7;
        }
        appartment=numberOfStays*65;
    }
    if(month=="June"||month=="September")
    {
        studio=75.2*numberOfStays;
        appartment=68.7*numberOfStays;
    }
    if(month=="July"||month=="August")
    {
        studio=76*numberOfStays;
        appartment=77*numberOfStays;
    }
    if(numberOfStays>14)
    {
        appartment=appartment*0.9;
    }
    return "Appartment: "+to_string(appartment)+"$"+"Studio: "+to_string(studio)+"$";
}
