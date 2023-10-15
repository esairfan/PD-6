#include <iostream>
#include <windows.h>
using namespace std;
string checkPointPosition(int h, int x, int y);
main()
{
    int h,x,y;
    cout<<"Enter height: ";
    cin>>h;
    cout<<"Enter x coordinate: ";
    cin>>x;
    cout<<"Enter y coordinate: ";
    cin>>y;
    cout<<checkPointPosition(h,x,y);
    
}
string checkPointPosition(int h, int x, int y)
{
    string result;
    
    if ((x < 3 * h) && (y < h))
    {
        result= "Inside";
    }
    else if (((x >h)&&(x < 2 * h)) && ((y < 4 * h)))
    {
        result= "Inside";
    }
    else if ((x == 0) && (y == 0))
    {
        result= "Border";
    }
    else if ((x == 0) && (y == h))
    {
        result= "Border";
    }
    else if ((x == h) && (y == h))
    {
        result= "Border";
    }
    else if ((x == 2 * h) && (y == h))
    {
        result= "Border";
    }
    else if ((x == 3 * h) && (y == h))
    {
        result= "Border";
    }
    else if ((x == 3 * h) && (y == 0))
    {
        result= "Border";
    }
    else if ((x == 2 * h) && (y == 0))
    {
        result= "Border";
    }
    else if ((x == h) && (y == 0))
    {
        result= "Border";
    }
    else if ((x == h) && (y == 2 * h))
    {
        result="Border";
    }
    else if ((x == h) && (y == 3 * h))
    {
        result= "Border";
    }
    else if ((x == h) && (y == 4 * h))
    {
        result= "Border";
    }
    else if ((x == 2 * h) && (y == 2 * h))
    {
        result= "Border";
    }
    else if ((x == 2 * h) && (y == 3 * h))
    {
        result= "Border";
    }
    else if ((x == 2 * h) && (y == 4 * h))
    {
        result= "Border";
    }

    else if (((x > 0) || (x < h)) && (y > h))
    {
        result= "Outside";
    }
    else if ((x > h) || (x < 2 * h) && (y > 4 * h))
    {
        result= "Outside";
    }

    else if (((x > 2 * h) || (x < 3 * h) && (y > h)))
    {
        result= "Outside";
    }
    else if ((x < 0) && ((y > 0) || (y < 0)))
    {
        result= "Outside";
    }
    else if (((x < 0) || (x > 0)) && (y < 0))
    {
        result= "Outside";
    }
    else if ((x > 3 * h) && (y == 0))
    {
        result= "Outside";
    }
    return result;
}