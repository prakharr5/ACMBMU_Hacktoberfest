#include <iostream>

using namespace std;

int main()
{
    int i,sum=0,a,b;
    cout<<"Enter 1st number";
    cin>>a;
    cout<<"Enter 2st number";
    cin>>b;
    for(i=1;i<=b;i++)
    sum=sum+a;
    cout<<"Multiplication is"<<sum;
    return 0;
}
