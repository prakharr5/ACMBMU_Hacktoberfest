// Make a 2 player game
// Ask user for how many rounds you want to play //done
// Conduct the game for given number of rounds //done
// Use 's', 'p', 'c' as input
// If user enters invalid choice repeat the game
// If draw repeat the game again
// Declare the final winner with scores of both of them

#include <iostream>
#include <string>
using namespace std;
class StonePaperScissor{
	public:
		int c1,c2;			//counter1 & 2	//stone=s; paper=p; scissor=c
		StonePaperScissor(){				//Constructor
			c1=0;
			c2=0;
		}
		void result(char a, char b){
			if(a=='s'&& b=='p')
			c2++;
			else if(a=='s'&& b=='c')
			c1++;
			else if(a=='p'&& b=='s')
			c1++;
			else if(a=='p'&& b=='c')
			c2++;
			else if(a=='c'&& b=='s')
			c2++;
			else if(a=='c'&& b=='p')
			c1++;
		}
};

int main(){
	StonePaperScissor obj;
	int n,r,i;
	cout<<"Enter 1 to Start the Game: ";
	cin>>n;
	if(n==1){
		cout<<"Game Starts!\n";
		cout<<"Enter the number of rounds you wants to play: ";
		cin>>r;
		char a,b;
		for(i=1; i<=r; )
		{
			cout<<"Round:"<<i<<"\n";
			cout<<"Enter s for stone; p for paper and c for scissor\n";
			cout<<"Enter Player1: ";
			cin>>a;
			cout<<"Enter Player2: ";
			cin>>b;
			cout<<"\n";					//leaving a Line
			if(a!='s'&&a!='p'&&a!='c'){
				cout<<"Invalid Input. Input Again\n";
				continue;
			}
			if(b!='s'&&b!='p'&&b!='c'){
				cout<<"Invalid Input. Input Again\n";
				continue;
			}
			else if(a==b){
				cout<<"Same Input. No Winner. Input Again\n";
				continue;
			}
			else{
				obj.result(a,b);		//calling via the object so that values get stored in that object of the class
				i++;
			}
		}
		if(obj.c1>obj.c2){
			cout<<"Winner: Player1\n";
		}
		else if(obj.c1<obj.c2){
			cout<<"Winner: Player2\n";
		}
		else{
			cout<<"Game Drawn.\n";
		}
		cout<<"Scores are: ";
		cout<<"Player1: "<<obj.c1<<"\n";
		cout<<"Player2: "<<obj.c2;
	}
	else{
		cout<<"Game Ends";
	}
}
