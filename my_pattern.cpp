//inverted pyramid
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter no of rows";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=n-i;j--)
        {
            cout<<" ";
        }
        for(int k=n;k>=i+1;k--)
        {
            cout<<"*"<<" ";
        }
     cout<<"\n";
    }    
} 
