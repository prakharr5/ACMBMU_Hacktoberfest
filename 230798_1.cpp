#include <iostream>
#include <math.h>
using namespace std;
void print_array(int a[],int s){
        cout<<"[";
    for(int i =0;i< s;i++){
        cout<<a[i]<<",";
    }
    cout<<"]";
}

int main(){
    const int s = 6;
    int array[s] = {1,2,3,4,5,6};
    print_array(array,s);

}
