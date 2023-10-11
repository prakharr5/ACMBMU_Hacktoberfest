#include<iostream>
using namespace std;
int main(){
    int i,a,fact;
    cout<<"enter number of which you find factorical of: ";
    cin>>a;
    if(a>=0){
        if(a==0){
            fact=1;
        }
        else{
            for(i=1;i<=a;++i){   
                fact=a*i;
            }
        }
    }
    else{
        cout<<"enter positive number";
    }
    cout<<"fact: "<<fact;
    return 0;
}


