/* Program to Print:
            1
         2  3  2
      3  4  5  4  3
   4  5  6  7  6  5  4
5  6  7  8  9  8  7  6  5*/
//take Number of Rows as input from the user 

//This Program Works Well till 50 Rows (i.e.: for 2 Digit Numbers): At 51: Number 100 is reached and Spacing Problem Occurs.

#include <iostream>
using namespace std;

int main(){
	cout<<"Input the Number of Rows you want to be Printed: ";
	int r;
	cin>>r;
	int c;						//counter to print spaces
	int in,dn;					//counters to print numbers: in: to print increasing Numbers; dn: to print decreasing numbers
	int i,j,k;					//looping control
	for(i=1; i<=r; i++){
		c=r-i;					//Spaces = Total row - i
		in=i;					//Increasing Value starts from: i
		while(c>0){
			cout<<"   ";		//3 spaces for 2 digit numbers
			c--;
		}
		for(j=1; j<=i; j++){
			if(in>9){
				cout<<in<<" ";	//1 space
			}
			else{
				cout<<in<<"  ";	//2 spaces		
			}
			in++;
		}
		dn=in-2;				//Decreasing Number starts everytime from in-2 
		for(k=1; k<i; k++){
			if(dn>9){
				cout<<dn<<" ";	//1 space
			}
			else{
				cout<<dn<<"  ";	//2 spaces		
			}
			dn--;
		}
		cout<<"\n";
	}
}
