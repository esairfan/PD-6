#include <iostream>
#include <windows.h>
using namespace std;
void bill(char service,char time, float min);
main()
{
    char service, time;
    float min;
    cout << "Enter the service code (R/r for regular, P/p for premiunm): ";
    cin >> service;
    cout << "Enter time of the call (D/d for day, N/n for night): ";
    cin >> time;
    cout << "Enter the number of minutes used: ";
    cin >> min;
    bill(service, time,min);
}
void bill(char service,char time, float min)
{
    float amount;
    if (service == 'P' || service == 'p')
    {
        if (time == 'd' || time == 'D')
        {

            if (min >= 75)
            {

                amount = 25 + (min - 75) * .1;
            }
            else
            {
                amount = 25;
            }
        }
        if(time == 'N' || time == 'n')
        {
            if (min >= 100)
            {
                amount = 25 + (min - 100) * 0.05;
            }
            else
            {
                amount = 25;
            }
        }
    }
    if(service == 'R' || service == 'r')
    {
        if (min >= 50)
            {
                amount = 10 + (min - 50) * 0.2;
            }
            else
            {
                amount = 25;
            }
    }
    if (service == 'P' || service == 'p')
    {
        cout<<"Service Type: Premium"<<endl;
    }
    if (service == 'r' || service == 'R')
    {
        cout<<"Service Type: Regular"<<endl;
    }
    cout<<"Total Minutes Used: "<<min<<" minutes"<<endl;
    cout<<"Amount Due: $"<<amount<<endl;
}