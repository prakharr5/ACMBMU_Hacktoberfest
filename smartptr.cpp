#include<iostream>
#include<memory>
using namespace std;
class MyClass{
public:
    MyClass(){
    std::cout << "Constructor invoked" <<std::endl;
    }
    ~MyClass(){
        std::cout<<"Destructor invoked" <<std::endl;
    }
    void display()
    {
        cout<<endl<<"I am using MyClass"<<endl;
    }
};

int main(){
    std::unique_ptr<MyClass>myPtr1 = std::make_unique<MyClass>();
    return 0;
}
