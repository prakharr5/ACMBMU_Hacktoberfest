#include <iostream>

using namespace std;

int main()
{ int no;
int n=1;
int arr[32];


    cout<<" enter any +ve integer to convert into binary no. =";
    cin>>no;
   int c=no;
    
    
    if (no == 0) {
        cout << "Binary representation: 0" << endl;
        return 0;
    }
    else if(no<0){
        
        cout <<"please enter +ve integer only ";
        
    }
    else
    {

    while(no>0){
        arr[n]=no%2;
        n++;
        no/=2;
        
    }
    
//    displaying into reverse order
 cout<<"\n\tbinary representation of "<<c<<" is : ";
           for(int i=n-1;i>0;i--){
               cout<<arr[i];
           }
    }
    return 0;
}
