#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string>lists;
void interface()
{
   		cout<<"view tasks"<<endl;
			cout<<"add task"<<endl;
			cout<<"delete task"<<endl;
}
void addition()
{
    	string list1;
			cout<<"what would you like to add"<<endl;
			cin.ignore();
			getline(cin,list1);
			lists.push_back(list1);
		
}
void sub()
{
   	int a;
			cout<<"delete which line "<<endl;
			cin>>a;
			if(a<lists.size() && a>=0) 
			{
			lists.erase(lists.begin()+a);
			cout<<"task removed"<<endl;
			}
			else
			{
			    cout<<"enter a valid number"<<endl;
			}
}
void views()
    {
       
			if(lists.empty())
			{
				cout<<"the list is empty"<<endl;
			}
			else
			{
				cout<<"your tasks are"<<endl;
				for(int i=0; i<lists.size(); i++)
				{
					cout<<i<<" "<<lists[i]<<endl;
				}
			} 
    }

int main()
{
	
	bool running=true;
	string command;

    while(running)
	{
	    interface();
		cout<<"what would you like to do(view,add,delete)"<<endl;
		cin>>command;
		
	   if(command=="add")//add task
		{
	addition();
		}
		else if(command=="view")//view tasks
		{
	    views();
		}
		else if(command=="delete")//delete task
		{
		sub();
    }
	}
}
