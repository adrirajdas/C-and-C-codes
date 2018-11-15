#include<iostream>
#include<conio.h>
#include<math.h>
#define f(z) (z)*(z)
using namespace std;
unsigned long int factorial(int);
int main()
{
	int x[10][10];
	int i,j,n,t,num=1,deno,fd;
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
	cout<<"\n"<<fd<<"\n";
	for(i=1;x[i+1][0]!=0;i++)
	{
		num=(num*(n-x[0][i-1]));
		cout<<"factorial="<<factorial(i)<<"\n";
		deno=(factorial(i)*(pow(2,i)));
		func=((num/deno) * x[i+1][0]);
		cout<<"\n"<<func;
		fd=fd+func;
	}
	cout<<"\n:-"<<fd;	
}
unsigned long int factorial(int s)
{
	unsigned long int f=1;
	int i;
	for(i=1;i<=s;i++)
	{
		f=f*i;
	}
	cout<<"\nfunction"<<f<<"\n";
	return(f);
}
