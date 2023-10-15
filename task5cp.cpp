#include <iostream>
#include <windows.h>
using namespace std;
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity);
main()
{
    string fruit, dayOfWeek;
    double quantity;
    cout<<"Enter fruit: ";
    cin >>fruit;
    cout<<"Enter day: ";
    cin>>dayOfWeek;
    cout<<"Enter quantity: ";
    cin>>quantity;
    cout<<calculateFruitPrice(fruit, dayOfWeek, quantity);
}
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity)
{
    float price;
    if(dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday")
    {
        if(fruit=="banana")
        {
            price=quantity*2.5;
        }
        if(fruit=="apple")
        {
            price=quantity*1.2;
        }
        if(fruit=="orange")
        {
            price=quantity*.85;
        }
        if(fruit=="grapefruit")
        {
            price=quantity*1.45;
        }
        if(fruit=="kiwi")
        {
            price=quantity*2.7;
        }
        if(fruit=="pineapple")
        {
            price=quantity*5.5;
        }
        if(fruit=="grapes")
        {
            price=quantity*3.85;
        }
        
    }
    if(dayOfWeek=="Sunday"||dayOfWeek=="Saturday")
    {
        if(fruit=="banana")
        {
            price=quantity*2.7;
        }
        if(fruit=="apple")
        {
            price=quantity*1.25;
        }
        if(fruit=="orange")
        {
            price=quantity*.9;
        }
        if(fruit=="grapefruit")
        {
            price=quantity*1.6;
        }
        if(fruit=="kiwi")
        {
            price=quantity*3;
        }
        if(fruit=="pineapple")
        {
            price=quantity*5.6;
        }
        if(fruit=="grapes")
        {
            price=quantity*4.2;
        }
        
    }
    return price;
}