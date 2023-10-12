//program to compare two numbers
#include <iostream>

using namespace std;

int greet(int a, int b){
    int c=a+b;
    return c;
}
int main()
{
    int num1,num2;
    cout<<"enter two numbers:";
    cin>>num1;
    cin>>num2;
    if (num1<num2){
        cout<<num1<<" is smaller than "<<num2;
    }
    else if (num1>num2){
        cout<<num1<<" is greater than "<<num2;
    }
    else{
        cout<<"both numbers are equal";
    }
    return 0;
}

