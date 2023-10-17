#include<iostream>
using namespace std;


struct employee
    {
        /* data */
        int eID;
        char favChar;
        float salary;

    };
    union money
    {
       int rice;
       char car;
       float pounds;
    };


    int main()
    {
        struct employee harry;
        harry.eID=1;
        harry.favChar='c';
        harry.salary=12000;
        cout<<"The value of salary is:"<<harry.salary<<endl;
        return 0;

        

    }
    
