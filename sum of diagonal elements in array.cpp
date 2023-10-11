#include<iostream>
using namespace std;
int main(){
   int row;
    int col;
    cout<<"enter number of rows ";
    cin>>row;
    cout<<"enter number of columns ";
    cin>>col;
   
    int a[row][col];
    for (int i = 0; i < row; i++)
    { 
        for (int j = 0; j < col; j++)
        
        {   cout<<"enter the value ";
            cin>>a[i][j];

        }
    }
    int diagonal1=0;
    int diagonal2=0;
    for (int i = 0; i < row; i++)
    { 
        for (int j = 0; j < col; j++)
        
        {   if (i==j)
        {
            diagonal1+=a[i][j];
        }
        else if (i+j==row-1)
        {
            diagonal2+=a[i][j];
        }
        
        
        
        }
        
        
            
        }
    
    cout<<"the sum of diagonal element "<<diagonal1+diagonal2;

        
        
   return 0;
}
