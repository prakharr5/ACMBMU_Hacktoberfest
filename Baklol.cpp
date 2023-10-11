#include <iostream>

using namespace std;

int main()
{
    int a[5][2]={1,2,3,4,5,6,7,8,9,10};
    
    cout<< &a<< endl ;
    cout<< &a[0][0]<< endl;
    cout<< &a[1][0]<< endl;
    cout<< &a[2][0]<< endl;
    cout<< &a[3][0]<< endl;
    cout<< &a[4][0]<< endl;
    cout<< &a[0][1]<< endl;
    cout<< &a[1][1]<< endl;
    cout<< &a[2][1]<< endl;
    cout<< &a[3][1]<< endl;
    cout<< &a[4][1]<< endl;
    return 0;
}
