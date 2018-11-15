#include<iostream>
#include<conio.h>
using namespace std;
struct stack
{
	int list[5];
	int top;
}st;
int main()
{
	struct stack s;
	int data,x,opt;
	while(1)
	{
		cout<<"1. push";
		cout<<"2. pop";
		cout<<"3. display";
		cout<<"4.exit";
		cout<<"\nenter the option=";
		cin>>opt;
		if(opt==1)
		{
			cout<<"enter the data=";
			cin>>data;
			push(data);
		}
		if(opt==2)
		{
			x=pop(&data);
			if(x!=-1)
			{
				cout<<data;
			}
		}
		if(opt==3)
		{
			int i;
			if(st.top==-1)
			{
				return;
			}
			else
			{
				while(st.top<=4)
				{
					cout<<st.list[i];
				}
			}
		}
	}
}

