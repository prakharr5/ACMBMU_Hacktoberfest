#include<iostream>
using namespace std;





void diamond(int n){
if(n%2==0){
 for (int i = 1; i <= (n/2); i++){
 for (int k = n-i; k >= n/2; k--)
cout<<"  ";
     for (int j = 1; j <= i; j++){cout<<"*   ";}cout<<endl;

 }
 for (int i = 1;i<=((n/2)+1);i++){cout<<"*   ";}cout<<endl;
  for (int i = (n/2); i >0 ; i--){
 for (int k = n-i; k >= n/2; k--)
cout<<"  ";
     for (int j = 1; j <= i; j++){cout<<"*   ";}cout<<endl;

 }
}
else{for (int i = 1; i <= (n/2); i++){
 for (int k = n-i; k >= (n/2)+1; k--)
cout<<"  ";
     for (int j = 1; j <= i; j++){cout<<"*   ";}cout<<endl;

 }
 for (int i = 1;i<=((n/2)+1);i++){cout<<"*   ";}cout<<endl;
  for (int i = (n/2); i >0 ; i--){
 for (int k = n-i; k > n/2; k--)
cout<<"  ";
     for (int j = 1; j <= i; j++){cout<<"*   ";}cout<<endl;

 }}


   
}
int main(){
    int m;
    cin>>m;
    diamond(m);
}
