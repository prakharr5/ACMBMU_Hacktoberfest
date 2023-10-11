#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h;
    cin>>a>>b>>c>>d;
    cin>>e>>f>>g>>h;
    cout<<"The center of the sphere is ";
    cout<<fabs(e/2)<<fabs(f/2)<<fabs(g/2);
    int u = fabs(e/2);
    int v= fabs(f/2);
    int w = fabs(g/2);
    cout<<"The radius of the sphere is";
    float r = sqrt(((u*u)+(v*v)+(w*w))-h);
    cout<<r;
    float coeff=sqrt((a*a)+(b*b)+(c*c));
    float num1= (a*u)+(b*v)+(c*w);
    float eqn= num1/coeff;
    cout<<"Distance from the plane"<<eqn;
    int  rad_circle= sqrt((r*r)-(eqn*eqn));
    cout<<"Radius "<<rad_circle;
    float area_circle= 3.14*(rad_circle*rad_circle);
    cout<<"areaof circle"<<area_circle;

}
