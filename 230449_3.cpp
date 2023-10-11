#include<iostream>
#include<cmath>
using namespace std; 
int main(){

float a,b,c;
cout<<"Enter sides of a triangle = "; cin>>a>>b>>c; cout<<endl; 

if(powf(a, 2) == powf(b, 2) + powf(c, 2)) 
{cout<<"Angle A is 90 degrees.";}

else if ((a*a) != (b*b) + (c*c)) 
{cout<<"Angle A isn't 90 degrees.";}

    return 0; 
}
