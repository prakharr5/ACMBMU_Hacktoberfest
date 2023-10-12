//program to print Diamond pattern
//input the breadth of the Diamond from the User

//here: printing a Diamont with Central Row having stars = breadth of Diamond.

#include <iostream>
using namespace std;

int main(){
	cout<<"Input the Breadth of Daimond that you want to be Printed: ";
	int b;
	cin>>b;
	
	int sc;						//space counter: counts space
	int i,j;
	//upper-half including the Middle-Line
	for(i=1;i<=b; i++){
		sc=b-i;					//space = breadth -i
		while(sc>0){
			cout<<" ";			//1 space
			sc--;
		}
		for(j=0; j<i; j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
	//Lower Half
	for(i=1;i<b; i++){
		sc=i;					//space = i
		while(sc>0){
			cout<<" ";
			sc--;
		}
		for(j=0; j<b-i; j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
}
