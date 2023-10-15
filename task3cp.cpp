#include <iostream>
#include <windows.h>
using namespace std;
string findZodiacSign(int day, string month);
main()
{
    int day;
    string month;
    cout<<"Enter the day of birth: ";
    cin>>day;
    cout<<"Enter the month of birth (e.g.' January, February): ";
    cin>>month;
    cout<<"Zodiac Sign: "<<findZodiacSign( day, month);
    
}
string findZodiacSign(int day, string month)
{
    if((day==19||day==20||day==21)&&(month=="March"||month=="April"))
    {
        return "Aries";
    }

    if((day==20)&&(month=="May"||month=="April"))
    {
        return "Taurus";
    }
    if((day==20||day==21)&&(month=="May"||month=="June"))
    {
        return "Gemini";
    }
    if((day==21||day==22)&&(month=="June"||month=="July"))
    {
        return "Cancer";
    }
    if((day==22||day==23)&&(month=="July"||month=="August"))
    {
        return "Leo";
    }
    if((day==22||day==23)&&(month=="August"||month=="September"))
    {
        return "Virgo";
    }
    if((day==22||day==23)&&(month=="September"||month=="October"))
    {
        return "Libra";
    }
    if((day==21||day==22||day==23)&&(month=="October"||month=="November"))
    {
        return "Scorpio";
    }
    if((day==21||day==22)&&(month=="November"||month=="December"))
    {
        return "Sagittarius";
    }
    if((day==19||day==20||day==21||day==22)&&(month=="December"||month=="January"))
    {
        return "Capricorn";
    }
    if((day==18||day==19||day==20)&&(month=="January"||month=="February"))
    {
        return "Aquarius";
    }
    if((day==19||day==20)&&(month=="February"||month=="March"))
    {
        return "Pisces";
    }
    
}