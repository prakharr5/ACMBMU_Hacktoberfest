
#include<iostream>
using namespace std;
int main(){
    int x=1;
    int y;
    cout<<"enter the no";
    cin>>y;
    
    for(int i=1; i<=y; ++i){
        x *= i;
    }
    cout<<x;   
}
