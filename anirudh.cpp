#include <iostream>
using namespace std;
void reverse_pyramid(int n){
    int row,space,k;
        for(row=n;row>=1;row--){
            for(space=1;space<=n-row+1;space++){
                cout<<" ";
            }for(k=row;k<=2*row-1;k++){
                cout<<"*";
            }for(k=0;k<row-1;k++){
                cout<<"*";
        }cout<<endl;
    }
}
int main(){
  cout<<reverse_pyramid()
