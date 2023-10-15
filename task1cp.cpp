#include <iostream>
#include <windows.h>
using namespace std;
string temp(string temperature ,string humidity);
main()
{
    string temperature,humidity;
    cout<<"Enter temperature (warm or cold): ";
    cin>>temperature;
    cout<<"Enter humidity (dry or humid): ";
    cin>>humidity;
    cout<<temp(temperature , humidity );
}
string temp(string temperature ,string humidity)
{
    if(temperature=="warm")
    {
        if(humidity=="dry")
        {
        return "Play tennis";
        }
        if(humidity=="humid")
        {
            return "swim";
        }
    }
    if(temperature=="cold")
    {
        if(humidity=="dry")
        {
        return "Play basketball";
        }
        if(humidity=="humid")
        {
            return "Watch tv";
        }
    }
}