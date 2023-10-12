#include <iostream>
using namespace std;
int main() {
    int i,l,s=0,n,p,m;
    cout<<"no of integer";
    cin>>n;
    int a[20]={137,41593,89};
    for(i=0;i<n;i++)
    {
        l=a[i]%10;
        m=(a[i]/10)%10;
        p=l*m;
        s+=p;
    }
    cout<<"sum of product of last two digits:"<<s;
}
