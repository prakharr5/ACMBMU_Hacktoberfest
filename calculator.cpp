//calculator
#include <iostream>
using namespace std;

int main(){
    int num1,num2,sum,difference,average,product,division;
    cout<<"enter two numbers:";
    cin>>num1;
    cin>>num2;
    sum=num1+num2;
    difference=num1-num2;
    average=sum/2;
    product=num1*num2;
    division=num1/num2;
    char a,b,c,d,e,choice;
    cout<<"a.sum"<<endl<<"b.difference"<<endl<<"c.average"<<endl<<"d.product"<<endl<<"e.divide"<<endl;
    cout<<"enter choice:"<<endl;
    cin>>choice;
    switch(choice){
    case'a':
        cout<<"sum:"<<sum<<endl;
        break;
    case'b':
        cout<<"difference:"<<difference<<endl;
        break;
    case'c':
        cout<<"average:"<<average<<endl;
        break;
    case'd':
        cout<<"product:"<<product<<endl;
        break;
    case'e':
        cout<<"division:"<<division<<endl;
        break;
    }
    
    return 0;
}


