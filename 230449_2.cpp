#include<iostream>
#include<cmath>
using namespace std; 
int main(){

float h, k, r, s; 
cout<<"Enter h, k, r, s = "; cin>>h>>k>>r>>s; 

/* chord length = 2*sqrt(r^2 - (r-k)^2) */
float chord = 2*(sqrt( (r*r) - ((r-k)*(r-k))));

cout<<"The Chord length is = "<<chord<<endl;

    return 0; 
}
