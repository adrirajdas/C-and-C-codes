#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#define f(x) (x*x*x)-(9*x)+1
using namespace std;
int main()
{
    float x1,x2,d,i;
	cout<<"enter x1=";
	cin>>x1;
	cout<<"enter x2=";
	cin>>x2;
	d=(x1+x2)/5;
	do
	{
		if(f(i)==0)
			{
			cout<<i<<"\n";
			}
		if(f(i)<0)
		{
			x2=i;
		}
		else
		{
			x1=i;
		}
	}
		 while(fabs(x2-x1)>0.000005);
    printf("%5.5f",d);
	return(0);
}
