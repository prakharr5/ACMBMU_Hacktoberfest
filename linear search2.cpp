#include <iostream>
using namespace std;
int main() {
    int i,s=0,n,l=1;
    cout<<"no of integer";
    cin>>n;
    int a[20]={33,100,77,42,12};
    for(i=0;i<=n;i++)
    {
        s+=(a[i]*l);
        l++;
    }
    cout<<"sum of weighted number weighted by ith :"<<s;
}
