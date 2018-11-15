#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c;
	int r,i,s=0,sum=0,add=0;
	char x;
	cout<<"enter the number to be divided=";
	cin>>a;
	cout<<"enter the number that will divide=";
	cin>>b;
	cout<<"the result=";
	cin>>c;
	while(a!=0)
	{for(i=0;i<a;i++)
		{
		r=a%10;
			s=s+(a*pow(x,i));
		}
		a=a/10;
	}
	cout<<s<<"x"<<i;
	getch();
}
