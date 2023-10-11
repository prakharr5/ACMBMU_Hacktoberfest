#include <iostream>
using namespace std;
int main(){

int n,k,sum=0;   
cout<<"Enter the amount of numbers = "; cin>>n;  
  
for(int i=0; i<n; i++){
  cout<<"Enter the numbers = "; cin>>k;
  sum += k%10; 
}
cout<<"Sum of last two digits = "<<sum;
  
  return 0; 

}
