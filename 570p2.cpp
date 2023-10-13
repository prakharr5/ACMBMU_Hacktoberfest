#include <iostream>
using namespace std;
int main()
{
    int i,j,a,k,c;
    c=0;
    for (i=1;i<7;i++)
        {
        a=6-i;
        for(j=0;j<a;j++)
        {
            cout<<' ';
        }
        for (k=0;k<i;k++)
        {
            cout<<"*";
            cout<<' ';
        }
        cout<<'\n';

}
}
    
