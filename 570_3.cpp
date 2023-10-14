#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c,x,y;
    cout<<"Enter the cofficients of the equation x^2+y^2-ax-by-c=0";
    cin>>a>>b>>c;
    
    if (a>0)
    { 
        x=-(a/2);
    }
    else
    { 
        x=(a/2);
    }
    if (b>0)
    {
        y=-(b/2);
    }
    else
    {
        y=(b/2);
    };
    float r =sqrt(((x*x)+(y*y))-c);
    cout<<"The center of the circle is ("<<x<<","<<y<<") and the radius of the circle is "<< r;

}
