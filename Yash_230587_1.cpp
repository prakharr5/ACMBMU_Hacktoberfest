#include <iostream>
using namespace std;
int main(){
    int asteriskCount1 = 1;
    int asteriskCount2 = 6;
    for(int i=1;i<=6;i++)
    {
        //print spaces
        for(int j=1;j<=6-i;j++)
        cout<<" ";

        //print asterisks
        for(int k=1;k<=asteriskCount1;k++)
        {
            if(i==1 || k==1 || k==asteriskCount1)
            cout<<"* ";
            else
            cout<<"  ";
        }
         
        cout<<endl;

        asteriskCount1++;
    }

    for(int a=1;a<=6;a++)
    {
        //for spaces
        for(int b=1;b<=a-1;b++)
        cout<<" ";

        //for asterisks
        for(int c=1;c<=asteriskCount2;c++)
        {
            if(a==6 || c==1 || c==asteriskCount2)
            cout<<"* ";
            else
            cout<<"  ";
        }

        cout<<endl;
        asteriskCount2--;
    }
    return 0;

}
