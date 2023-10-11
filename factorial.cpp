#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter number ";
   cin>>n;
   int k=1;
   for (int i = 2; i <=n; i++)
   {
    k=k*i;
   }
   cout<<k;
   
   return 0;
}
