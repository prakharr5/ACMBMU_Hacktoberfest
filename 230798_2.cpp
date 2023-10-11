/* print the reverse of a number*/
#include <iostream>
#include <math.h>
using namespace std;
int rev_a_num(int x , int y = 0){
    int rem;
    while(x!=0)
    {
        rem = x% 10;
        y = y*10 + rem;
        x /= 10; 
        

    }
    return y;
    }
int main(){
    int num , rev_num;
    cout<<"Enter the number you want to reverse:";
    cin>>num;
    cout<<"The reversed number:"<<rev_a_num(num,rev_num);
    return 0 ;
}
