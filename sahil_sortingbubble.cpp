#include<iostream>
using namespace std;
int main()
{
 

 int n;
 cin>>n;
//bubble sorting
//repeatedly sorting two adjacent elements if they are in wrong order.

// we have to do n-1 alteration for our sorted array

int arr[n];
for (int i = 0; i < n; i++)
{
   cin>>arr[i];
}

int counter=1;
while (counter<n){
    for (int  i = 0; i < n-counter; i++)
    {
        if(arr[i]>arr[i+1])
        {
int temp = arr[i];
     arr[i]= arr[i+1];
     arr[i+1]=temp;


        }
    }
   counter++; 
}
for (int i = 0; i < n; i++)
{cout<<arr[i];
   
}
  

//insertion sorting

for (int i = 1; i < n; i++)
{
    int current = arr[i];
    int j = i-1;
    while(arr[j]>current && j>=0){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=current;
    





}


for (int i = 0; i < n; i++)
{cout<<arr[i];
   
}


    return 0;
}
