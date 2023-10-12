#include<iostream>
#include<cmath>
using namespace std; 
int main(){

float a, b, c; 
cout<<"Enter a, b, c = "; cin>>a>>b>>c; 

const float pi = 3.14159265359;
float m = (powf(b, 2) + powf(c, 2) - powf(a, 2) )/(2*b*c); 
float m1 = acos(m);
float m2 = (m1*180)/pi; 

cout<<"Angle in radian is = "<<m1<<endl;  
cout<<"Angle in degree is = "<<m2<<endl; 
  
    return 0; 
}
