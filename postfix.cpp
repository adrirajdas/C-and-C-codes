#include<iostream>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
using namespace std;
struct stack
{
	int a[5];
	int t;
}st;
//int eval (char[]);
//void push(int);
//int pop();
void push(int s)
{
	//if(st.t>5)
//	{
		st.a[st.t]=s;
		st.t++;
//	}
	/*else
	{
		cout<<"overflow";
	}*/
}
int pop()
{
	//if(st.t>0)
//	{
		st.t--;
		return(st.a[st.t]);
//	}
	/*else
	{
		cout<<"underflow";
	}*/
}
int eval(char p[])
{
	int r,v1=0,v2=0,i;
	char x;
//	st.t= -1;
	for(i=0;p[i]!='\0';i++)
	{
		x=p[i];
		if(isdigit(x))
		{
			push((int) x);
		}
		else
		{
			v2=pop();cout<<"\n"<<v2;
			v1=pop();cout<<"\n"<<v1;
			switch(x)
			{
				case '+':
				{
					r=v1+v2;
					break;
				}
				case '-':
				{
					r=v1-v2;
					break;
				}
				case '*':
				{
					r=v1*v2;
					break;
				}
				case '/':
				{
					r=v1/v2;
					break;
				} 
			}
			push(r);
		}
	}
	r=pop();
	return(r);
}
int main()
{
	char ar[100];
	cout<<"enter the exp:";
	gets(ar);
	int c;
	c=eval(ar);
	cout<<"result"<<c;
	return(0);
}
