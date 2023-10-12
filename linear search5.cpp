#include <iostream>
using namespace std;
int main() {
    int i,l,s=0,n,p,m,o;
    cout<<"no of integer";
    cin>>n;
    int a[20]={33,100,77,42,12};
    for (i=0;i<n;i++)
    {
        l=a[i]%10;
        m=(a[i]/10)%10;
        o=(a[i]-(l+(m*10))+((l*10)+m));
        s+=o;
    }
    cout<<"sum of digits after exchanging last two digits:"<<s;
}
