#include <iostream>
using namespace std;

    //Arrays are variables containing multiple values, instead of declaring separate variables for each value.

 //                                                      ***Functions***


void Replace_value(int arr[],int y,int x){   //Function that takes following parameters: array, the position you want number to be replaced at and the new value.                             
             arr[y]=x;      //Updating values of pre-existing array.
    cout<<"Replace valuye of array is: "<<arr[y]<<endl;
};




void Size_of_Array(int arr[],int size){    //Function that takes following parameters: array, number of elements in array.
    cout<<"Size of array is: "<<sizeof(arr[0])*size<<endl;    //Size of array.
};




int main(){
    //Making and initializing an array.

    int a[5]={3,4,5,6,7} ;   //integer type array.
    cout<<"Value of 0th element of a is: "<<a[0]<<endl;    //Accessing array values.

    Replace_value(a,0,8);   //calls the replace function i've made above and replaces 3 with 8.
    Size_of_Array(a,5);     //calls the function for determining Size of array i've made above.



    

    //                                         ***Two Dimensional array***



    int b[2][3]={{2,3,4},       //Creating and initializing an array of two rows and three collumns
                 {4,5,6}};
    cout<<"Value in amtrix b at (0,1) is: "<<b[1][2]<<endl<<"Value in amtrix b at (0,1) is: "<<b[0][1] ; //Printing values
    
    return 0;
    
    
}

//Functions are of void type because we are printing the required values then and there only, we could have taken "int Replace_value" 
//and returned the changed value then store it in some variable in main function and printed it but all that is not required
//For example
/*  
    #include <iostream>
 using namespace std;


 int Replace_value(int arr[],int y,int x){   
             arr[y]=x;     
             return arr[y];
 }

    int main(){
        int x;
        int a[3]={2,3,4};
        x=Replace_value(a,0,9);
        cout<<x;
    }

not that efficient
*/
