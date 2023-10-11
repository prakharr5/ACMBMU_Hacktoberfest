#include <iostream>
using namespace std;
int fun()
{
    return 1;

}
float fn()
{
    return 10.23;
}
int main()
{
    cout<<(int)fun<<' ';
    cout<<(float)fn()<<' ';
}
