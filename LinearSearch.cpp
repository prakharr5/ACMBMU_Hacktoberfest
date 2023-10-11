#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int size=8;
    int key;
    cin>>key;

    bool flag=0;
    //0-->Not found
    //1-->Found

    //linear search
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            break;
        }
        
     }

     if (flag)  cout<<"Present"<<endl;
     else cout<<"Absent"<<endl;
    
}
