#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
   int i,j;
    cout<<"generation  of series of generation \n";
    i=1;
    do{
        for(j=1;j<=i;j++)
        cout<<j;
        cout<<endl;
        i++;
    }
    while(i<=9);
    return 0;
}
