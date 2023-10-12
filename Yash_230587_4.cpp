#include <iostream>
using namespace std;
int main(){
    int asteriskCount = 6;
    for(int i=1;i<=6;i++)
    {
        //for spaces
        for(int j=1;j<=i;j++)
        cout<<" ";

        //for asterisk
        for(int k=1;k<=asteriskCount;k++)
        cout<<"* ";

        cout<<endl;
        asteriskCount--;
    }
    return 0;
}
