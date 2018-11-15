#include<iostream>
#include<conio.h>
using namespace std;
void prime(int);
void composite(int);
int main()
{
	int m,i,a[100];
	for(i=0;i<100;i++)
	{a[i];
	}
	cout<<"prime=";
	prime(m);
	cout<<"\n\ncomposite=";
	composite(m);
	getch();
}
void prime(int m)
{int i,j;

	for(i=0;i<=100;i++)
	{
	m=0;
	for(j=2;j<=i/2;j++)	
	{
	if(i%j==0)
	{m=1;
	break;}
	}
	
	if(m==0)
	{cout<<i<<" ";}
}
}
void composite(int m)
{int i,j;

	for(i=0;i<=100;i++)
	{
	m=0;
	for(j=2;j<=i/2;j++)
	{
	if(i%j==0)
	{m=1;
	break;}
	}
	if(m!=0)
	{cout<<i<<" ";}
}
}	
