#include<iostream>
#include<conio.h>
#include<math.h>
#define f(z) (z)*(z)
using namespace std;
unsigned long int factorial(int);
int main()
{
	int x[10][10];
	int i,j,n,num=1,deno,fd,h=2;
	float func;
	cout<<"enter the value of x=\n";
	for(i=0;i<5;i++)
	{
		cin>>x[0][i];
	}
	for(i=0;i<5;i++)
	{
		x[1][i]=f(x[0][i]);	
	}
	 for(i=0;i<2;i++)
    {
                    for(j=0;j<5;j++)
                    {
                                    cout<<x[i][j]<<"\t";
                    }
                    cout<<"\n";
    }          
    for(i=2;i<5;i++)
    {
    	for(j=0;j<5;j++)
    	{
    		x[i][j]=x[i-1][j+1]-x[i-1][j];
    		cout<<x[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"\n";
	cout<<"correct design:-\n";
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i;j++)
		{
			cout<<x[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"\n";
	cout<<"enter the value of the number=";
	cin>>n;
	fd=x[0][1];
	cout<<fd<<"\n";
	for(i=1;x[i+1][0]!=0;i++)
	{
		num=num*(n-x[0][i-1]);
		cout<<num<<"\n";
		func=num/(factorial(i)*(pow(h,i)))*x[i+1][0];
		fd=fd+func;
	}
	cout<<fd;
/*	float ts,t=1,s;
	ts=x[0][1];
    for(i=1;x[i+1][0]!=0;i++)
    {
                    t=t*(n-x[0][i-1]);
                    cout<<t<<"\n";
                    s=(t/(factorial(i)*( pow(h,i))))*(x[i+1][0]);
                    ts=ts+s;
    }   
    cout<<ts;*/ 
}
unsigned long int factorial(int s)
{
	unsigned long int f=1;
	int i;
	for(i=1;i<=s;i++)
	{
		f=f*i;
	}
	return(f);
}
