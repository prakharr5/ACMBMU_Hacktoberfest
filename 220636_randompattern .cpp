#include <iostream>

using namespace std;

int main()
{  int n;
    int w;
    cout<<"\tenter any no. divisible by 3 = ";
    cin>>n;
    if(n%3==1){
        n= n-1;
        
    }
    else if(n%3==2){
        n=n+1;
        
    }
    else{
        n=n;
    }
    w = n%3+1;
    cout<<"\n\n\t\t";
  for(int i=1;i<=n;i++)
       {if(i==1 || i==n/3){ 
           for(int j=1;j<=(n/3)-i;j++){
                cout<<" ";
           }
           
           for(int j=1;j<=(n/3)+1;j++){
               cout<<"*";
           }
           cout<<"\n\t\t";
       }
          else if(i>1 && i<n/3) {
              for(int j=1;j<=(n/3)-i;j++){
                cout<<" ";
                
          } 
              for(int j=1;j<=1;j++){
                cout<<"*";
          }
          for(int j=1;j<=(n/3)-1;j++){
                cout<<" ";
          }
          for( int j=1;j<=1;j++){
              cout<<"*";
          }
          cout<<"\n\t\t";
       }
           else if (i>n/3 &&i<=(n/3)*2){
               
              for(int j=1;j<=1;j++){
                cout<<"*"; }
               for(int j=1;j<=(n/3)-1;j++){
                cout<<" ";}
                 for(int j=1;j<=1;j++){
                cout<<"*"; }
               
               cout<<"\n\t\t"; 
           }
           else if(i==((n/3)*2)+1 || i==n){
               for(int j=1; j<=i-(((n/3)*2)+1);j++){
                   cout<<" ";
               }
                
               
                     for(int j=1;j<=(n/3)+1;j++){
               cout<<"*";
           }
           cout<<"\n\t\t";
           }
            else if (i<n && i>((n/3)*2)+1){
                for(int j=1; j<=i-(((n/3)*2)+1);j++){
                   cout<<" ";
               }
                for(int j=1; j<=1;j++){
                   cout<<"*";
               }
               for( int j=1; j<=(n/3)-1; j++){
                   
                   cout<<" ";}
                      
                       for(int j=1;j<=1;j++){
               cout<<"*";
           }
           cout<<"\n\t\t";
           }
           
       }
       cout<<" \n\n\tthis pattern contains "<<n<<" rows";
    return 0;
}
