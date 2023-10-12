// sorting the array file
#include<iostream>
using namespace std ;
int main(){
    int n = 10 ;
    int array[n] = { 900 , 45 , 698 ,54 , 697 , 479 , 100 , 987 , 645 , 794 };
    for(int i = 0 ; i<n-1;i++){
        for(int j =i+1 ;j<n;j++){

            if(array[j]<array[i]){
                int temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
    for(int i=0 ;i<n;i++){
        cout<<array[i];
    }

}
