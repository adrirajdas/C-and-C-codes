#include<iostream>
#include<conio.h>
using namespace std;
void sort(int[],int);
int main()
{
	int a[10],size,i;
	cout<<"enter the size of the array=";
	cin>>size;
//	cout<<"enter the array=";
//	for(i=0;i<size;i++)
//	{
//		cin>>a[i];
//	}
	sort(a,size);
	for(i=0;i<size;i++)
	{
		cout<<a[i];
	}
	getch();
}
void sort(int a[],int size)
{
	int i,j,y;
	cout<<"enter the first element=";
	cin>>a[0];
	for(i=1;i<size;i++)
	{
		cout<<"enter the number=";
		cin>>y;
		for(j=i-1;j>=0 && a[j]>y;j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=y;
    }
}
