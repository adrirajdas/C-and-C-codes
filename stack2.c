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
	}
	else
	{
		cout<<"overflow";
	}
}
int pop()
{
	if(st.t>0)
	{
		x=st.a[st.t];
		st.t--;
		return(x);
	}
}
int main()
{
	st.t=0;
	int n,p,d;
	while(1)
	{
		cout<<"1.push";
		cout<<"2.pop";
		cout<<"display";
		cout<<"4.exit";
		cout<<"\n enter the option";
		cin>>n;
		if(n==1)
		{
			cout<<"enter the number=";
			cin>>p;
			push(p);
		}
		if(n==2)
		{
			d=pop();
			cout<<"deleted"<<d;
		}
		if(n==3)
		{ int i;
			for(i=0;i<=st.a[st.t];i++)
			{
				cout<<"stack is="<<st.a[st.t];
			}
		}
		if(n==4)
		{
			return;
		}
	}
	return(0);
}
