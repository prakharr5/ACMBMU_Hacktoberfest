#include <iostream>
using namespace std;
//                                                  ***switch case function***

void switchlearning(char x)//also switch variable
{
	// switch statements
	switch (x) {
	case 'd':
		cout << "Choice is d";
		break;         
    case 'b':                 
		cout << "Choice is b";
		break;                                  
                            //break statement is used to break out of the switch when fulfilled.
                            //if not used then it will execute every other statement after that.
    case 'a':
        cout<<"choice is a"<<endl;
    case 'c':
        cout<<"choice is c (isnt supposed to print but you didnt use break)"<<endl;
	default:
		cout << "Bad choice :)";
		break;
    }
}


int main()
{
	char a;  // switch variable
    cin>>a;     //taking input for a, it will be single characters
    switchlearning(a);  //calling the switch function and passing 'a' in it
	return 0;
}
        
        //***Now take input as 'd' first then 'a' and see whether it prints all the following statemnts or just the one fulfilled***

