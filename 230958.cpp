
#include <iostream>

   
using namespace std;
void open_account();
void show_info();
void deposit();
void withdraw();

    long long int acno;
    double withdr;
    double depos;
    double balance;
    
    char name[30];
int main()
{
    int choice;
    
    while(choice!=5){
    cout<<"Welcome to Bank Managing System "<<endl;
    cout<<"1. Open Account"<<endl;
    cout<<"2. Show info"<<endl;
    cout<<"3. Deposit"<<endl;
    cout<<"4. Withdraw"<<endl;
    cout<<"Enter what u want to do";
    cin>>choice;
    
    
    switch (choice) {
        case 1:
        open_account();
        break;
        case 2:
        show_info();
        break;
        case 3:
        deposit();
        break;
        case 4:
        withdraw();
        break;
        case 5:
        cout<<"THANKYOU FOR EXITING THE PROGRAM:"<<endl;
        break;
        default:
        cout<<"INVALID CHOICE";
        break;
        
    }
    }
    return 0;
}



void open_account()
{
    
    cout<<"Enter Account number:";
    cin>>acno;
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter balance:";
    cin>>balance;
}

void show_info()
{
    cout<<"\n"<<acno;
    cout<<"\n"<<name;
    cout<<"\n"<<balance<<endl;
}

void deposit()
{
    cout<<"Enter amount u want to deposit"<<endl;
    cin>>depos;
    cout<<"Amount has been sumbitted in ur account"<<endl;
    balance=balance+depos;
    cout<<"Current balance:"<<balance<<endl;
}
void withdraw()
 {
     cout<<"Enter amount u want to withdraw"<<endl;
     cin>>withdr;
     if(withdr>balance)
     cout<<"Insufficient balance"<<endl;
     else{
         balance = balance - withdr;
     
     cout<<"Remaning balance"<<balance<<endl;}
 }
 
 
