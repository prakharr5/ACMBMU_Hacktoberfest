#include<iostream>
using namespace std;
int main(){
   int a=0,b=1,n,c=0,d=0;
   cout<<"enter how many number in series u want to print"<<endl;
   cin>>n;
   cout<<a<<","<<b;
   while(c<n-2){
    d=a+b;
    cout<<",";
    

    cout<<d;
    a=b;
    b=d;

    c++;
    
   }

  return 0;
}
