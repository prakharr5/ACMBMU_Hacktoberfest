#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter the number of elements in the array ";
   cin>>n;
   int b[n];
   for (int i = 0; i < n; i++){
    cout<<"enter the values: ";
    cin>>b[i]; }
   int duplicate=0;
  
   for(int i=0;i<n;i++){
      for (int j = i+1; j < n; j++)
      {
         if (b[i]==b[j])
         {
            duplicate+=1;
            break;
         }
         
      }
      
      
   }
   cout<<duplicate;

   return 0;
}
