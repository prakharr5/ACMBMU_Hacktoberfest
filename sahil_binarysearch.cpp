#include<iostream>
using namespace std;
int binarysearch(int arr[], int n , int k){
    //we have to define our starting and ending point
    int start=0;
    int ending=n;
    while(start<=ending){
        int mid = (start+ending)/2;
        if(arr[mid]==k){ return mid;}
        else if(arr[mid]>k){
            ending =mid-1;
        }
        else{ start =mid+1;}
    }
   
}
int main(){



int n;
cin>>n;
int arr[n];
for (int i=0;i<n;i++){
    cin>>arr[i];
}
int k;
cout<<"enter the key ";
cin>>k;
cout<<binarysearch(arr,n,k);




    return 0;
}
