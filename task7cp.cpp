#include <iostream>
#include <windows.h>
using namespace std;
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);
main()
{
    int examHour,  examMinute, studentHour, studentMinute;
    cout<<"Exam Starting Time (hour): ";
    cin>>examHour;
    cout<<"Exam Starting Time (minutues): ";
    cin>>examMinute;
    cout<<"Student hour of arrival: ";
    cin>>studentHour;
    cout<<"Student minutes of arrival: ";
    cin>>studentMinute;
    cout<<checkStudentStatus(examHour,  examMinute, studentHour, studentMinute);
}
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
{
    int studentTotalMinutes=(studentHour*60)+studentMinute;
    int examTotalMinutes=(examHour*60)+examMinute;
    if(examHour==studentHour&&examMinute==studentMinute)
    {
        return "On time";
    }
    if((studentTotalMinutes-examTotalMinutes)>0&&(studentTotalMinutes-examTotalMinutes)<60)
    {
        return "Late " +"\n" to_string(studentTotalMinutes-examTotalMinutes)+" minutes after the start";
    }
    if((studentTotalMinutes-examTotalMinutes)>=60)
    {
        return "Late " +"\n"to_string(studentHour-examHour)+":"+to_string(studentMinute-examMinute)+" minutes after start";
    }
    if((examTotalMinutes-studentTotalMinutes)>0&&(examTotalMinutes-studentTotalMinutes)<=30)
    {
        return "On time "+ "\n"to_string(examTotalMinutes-studentTotalMinutes)+"minutes before the start";
    }
    if((examTotalMinutes-studentTotalMinutes)>30&&(examTotalMinutes-studentTotalMinutes)<60)
    {
        return "Early "+ "\n"to_string(examTotalMinutes-studentTotalMinutes)+"minutes before the start";
    }
    if((examTotalMinutes-studentTotalMinutes)>=60)
    {
        return "Early "+"\n"to_string(examHour-studentHour)+":"+to_string(examMinute-studentMinute)+"minutes before the start";
    }
}