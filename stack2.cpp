#include<iostream>
using namespace std;
struct stack
{
	int a[5];
	int t;
}st;
void push(int s)
{
	if(st.t<5)
	{
		st.a[st.t]=s;
		st.t++;
	}
	else
	{
		cout<<"overflow";
	}
}
int pop()
{
	int x;
	if(st.t>=0)
	{
	//	x=st.t;
		st.t--;
		return(st.a[st.t]);
	}
	else
	{
		cout<<"\n underflow\n";
		return(0);
	}
}
int main()
{
	//st.t=0;
	int n,p,d,i;
	while(1)
	{
		cout<<"\n1.push";
		cout<<"\n2.pop";
		cout<<"\n3.display";
		cout<<"\n4.exit";
		cout<<"\n\n enter the option";
		cin>>n;
		if(n==1)
		{
			cout<<"enter the number=";
			cin>>p;
			push(p);
		}
		if(n==2)
		{
			int d;
			d=pop();
			cout<<d;
		}
		if(n==3)
		{ 
			cout<<"stack is=";
			for(i=0;i<st.t;i++)
			{
				cout<<st.a[i];
			}
		}
		if(n==4)
		{
			return(0);
		}
	}
	return(0);
}
