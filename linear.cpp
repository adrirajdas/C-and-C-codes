#include<iostream>
#include<conio.h>
using namespace std;
int linear(int [], int);
int main()
{
	int ar[10],i,s,n;
	cout<<"enter the size of the array:";
	cin>>s;
	int index;
	index=linear(ar,s);
	if(index==-1)
	{
		cout<<"element not found!!";
	}
	else
	{
		cout<<"item found!!";
	}
	getch();
}
int linear(int ar[], int s)
{
	int i,n;
	cout<<"enter the array";
	for(i=0;i<s;i++)
	{
		cin>>ar[i];
	}
	cout<<"enter the number to be searched:";
	cin>>n;	
	for(i=0;i<s;i++)
	{
		if(ar[i]==n)
		{
			return(n);
		}
    }
		return(-1);
}
