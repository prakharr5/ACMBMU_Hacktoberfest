#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    float a,b,c,ce,ce1,r;
    cout<<"enter equation of circle as x^2+y^2+ax+by+c=0\n"<<"enter value of a,b,c";
    cin>>a>>b>>c;
    ce=(-a/2);
    ce1=(-b/2);
    cout<<"Centre is="<<"("<<ce<<","<<ce1<<")";
    r=sqrt((a*a)+(b*b)-c);
    cout<<"radius is="<<r;
    return 0;
}
