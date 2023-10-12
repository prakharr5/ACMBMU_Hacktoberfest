#include<iostream>
using namespace std;
int main()
{
  int m,n;
  cout<<"enter no of rows and column respectively : "<<endl;
  cin>>n>>m;
  for(int i = 1;i<=n;i++){
      
      for(int j=1; j<=m;j++)
      cout<<"* ";
      cout<<endl;
  }
    
    return 0;
}
