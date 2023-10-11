#include <iostream>
using namespace std;
int main() {int n; int m;
cout<<"enter your rows:";
  cin>>n;
  int k;
  //  cout<<"enter your cols:";
  // cin>>m;          
  for(int i = 1; i<=n; i++){
  for(int j=1; j<=n-i;j++){
    cout<<" ";}
	for(k=1;k<=i;k++){
		cout<<"*";
	}
	cout<<endl;
      
  }}
          

           
