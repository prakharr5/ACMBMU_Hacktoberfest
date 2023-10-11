#include<iostream>
using namespace std;

string rec1[20],rec2[20],rec3[20],rec4[20],rec5[20];
int total=0;

void add()
{
    int x=0;
	cout<<"NO. of students u want to enter??"<<endl;
	cin>>x;
	if(total==0)
	{
		total=x+total;
		for(int i=0;i<x;i++)
		{
			cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
			cout<<" name: ";
			cin>>rec1[i];
			cout<<" Roll no: ";
			cin>>rec2[i];
			cout<<" course: ";
			cin>>rec3[i];
			cout<<" class: ";
			cin>>rec4[i];
			cout<<" contact: ";
			cin>>rec5[i];
		}
	}
	else
	{
	    for(int i=total;i<x+total;i++)
		{
		    cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
			cout<<"Enter name ";
			cin>>rec1[i];
			cout<<"Enter Roll no ";
			cin>>rec2[i];
			cout<<"Enter course ";
			cin>>rec3[i];
			cout<<"Enter class ";
			cin>>rec4[i];
			cout<<"Enter contact ";
			cin>>rec5[i];
		}
		total=x+total;
	}
}

void show()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else
	{
		for(int i=0;i<total;i++)
       	{
	    	cout<<"\nData of Student "<<i+1<<endl<<endl;
	    	cout<<"Name "<<rec1[i]<<endl;
	    	cout<<"Roll no "<<rec2[i]<<endl;
	    	cout<<"Course "<<rec3[i]<<endl;
	    	cout<<"Class "<<rec4[i]<<endl;
	    	cout<<"Contact "<<rec5[i]<<endl;
	    }
	}

}

void search()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else
	{
	    string rollno;
		cout<<"Enter the roll no of student"<<endl;
		cin>>rollno;
		for(int i=0;i<total;i++)
		{
			if(rollno==rec2[i])
			{
				cout<<"Name "<<rec1[i]<<endl;
	         	cout<<"Roll no "<<rec2[i]<<endl;
	            cout<<"Course "<<rec3[i]<<endl;
	            cout<<"Class "<<rec4[i]<<endl;
	    	   	cout<<"Contact "<<rec5[i]<<endl;
			}
		}
	}
}

void EDIT()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else
	{
		string rollno;
		cout<<"Enter the roll no of student which you want to update"<<endl;
		cin>>rollno;
		for(int i=0;i<total;i++)
		{
			if(rollno==rec2[i])
			{
				cout<<"\nPrevious data"<<endl<<endl;
				cout<<"Data of Student "<<i+1<<endl;
				cout<<"Name "<<rec1[i]<<endl;
	          	cout<<"Roll no "<<rec2[i]<<endl;
	   	        cout<<"Course "<<rec3[i]<<endl;
	   	        cout<<"Class "<<rec4[i]<<endl;
	        	cout<<"Contact "<<rec5[i]<<endl;
	        	
	        	int option;
	        	cout<<"\nENTER NEW DATA"<<endl<<endl;
	        	cout<<"what u want to edit select ur option sr.no.";
	        	cout<<"\n1) name \n2) Roll no \n3) course\n4) class \n5) contact no.\n6)to complete edit\n:";
	        	cin>>option;
	        	
	        	switch(option)
    	{
        	case 1:
			cout<<"enter name: ";
			cin>>rec1[i];
			break;

	    	case 2:
			cout<<"Enter Roll no ";
	            cin>>rec2[i];
			break;

	    	case 3:
			cout<<"Enter course ";
	            cin>>rec3[i];
			break;

	    	case 4:
		cout<<"Enter class ";
	            cin>>rec4[i];
			break;

	    	case 5:
			cout<<"Enter contact no. ";
	            cin>>rec5[i];
			break;

	       	case 6:
			cout<<"enter complete details";
			
				cout<<"\nEnter name ";
	            cin>>rec1[i];
	            cout<<"Enter Roll no ";
	            cin>>rec2[i];
	        	cout<<"Enter course ";
	            cin>>rec3[i];
	            cout<<"Enter class ";
	            cin>>rec4[i];
	            cout<<"Enter contact ";
	            cin>>rec5[i];
			break;

	    	default:
			cout<<"Invalid input"<<endl;
			break;
    	}
	        	
			}		 
		}
	}
}

void deleterecord()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else
	{
		int a;
	   	cout<<"\nPress 1 to delete all record"<<endl;
		cout<<"Press 2 to delete specific record"<<endl;
		cin>>a;
		if(a==1)
		{
		    total=0;
		    cout<<"\nAll record is deleted..!!"<<endl;
		}
		else if(a==2)
		{
	    	string rollno;
			cout<<"\nEnter the roll no of student which you wanted to delete"<<endl;
			cin>>rollno;
			for(int i=0;i<total;i++)
			{
				if(rollno==rec2[i])
				{
					for(int j=i;j<total;j++)
					{
		    			rec1[j]=rec1[j+1];
						rec2[j]=rec2[j+1];
					    rec3[j]=rec3[j+1];
						rec4[j]=rec4[j+1];
						rec5[j]=rec5[j+1];
				 	}
					total--;
					cout<<"\nYour required record is deleted"<<endl;
				}
			}
		}
		else 
		{
			cout<<"Invalid input";
		}
    }
}

int main()
{
    cout<<"SELECT AN OPTION AMONG BELOW: "<<endl;
	int value;
	while(true)
	{
	    cout<<"\n TO enter data Press 1"<<endl;
    	cout<<" TO show data Press 2"<<endl;
    	cout<<" TO search data Press 3"<<endl;
    	cout<<" TO edit data Press 4"<<endl;
    	cout<<" TO delete data Press 5"<<endl;
    	cout<<" TO exit Press 6"<<endl<<endl;
    	cin>>value;
    
    	switch(value)
    	{
        	case 1:
			add();
			break;

	    	case 2:
			show();
			break;

	    	case 3:
			search();
			break;

	    	case 4:
			EDIT();
			break;

	    	case 5:
			deleterecord();
			break;

	       	case 6:
			exit(0);
			break;

	    	default:
			cout<<"Invalid input"<<endl;
			break;
    	}
    }
    return 0;
}
