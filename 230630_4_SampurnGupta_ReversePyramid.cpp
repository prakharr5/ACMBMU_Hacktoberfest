/* Program to print: Reverse Pyramid
* * * * *
 * * * *
  * * *
   * *
    *	*/

#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the Number of Rows you want to be Printed: ";
	cin>>n;
	int c;   				//counter to print spaces
	for(int i=0; i<n;i++){	// i is intentionally 0: bec 0 spaces in line 1
		c=i;
		while(c>0){
			cout<<" ";		//1 space
			c--;
		}
		for(int j=i;j<n;j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
}
