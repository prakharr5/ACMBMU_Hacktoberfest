#include<iostream>
using namespace std;
int main(){

 int price , quantity;
cout<<"enter your quantity";
cin>>quantity;
price = (quantity*100);
if(price>1000){
	cout<<"the price is:"<<price - (price*0.1)<<endl;}
else{cout<<"the price is"<<price<<endl;}
return 0;
}
