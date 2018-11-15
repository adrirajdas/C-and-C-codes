#include<iostream>
#include<conio.h>
using namespace std;
int binary (int [], int , int);
int main()
{
	int a[100],i,s;
	cout<<"enter the size";
	cin>>s;
	cout<<"enter the elements of the array=";
	for(i=0;i<s;i++)
	{
		cin>>a[i];
		
	}
	int n;
	cout<<"enter the number to be searched";
	cin>>n;
	int index;
	index= binary(a,s,n);
	if(index==-1)
	{
		cout<<"not found!!";
	
	}
	else
	{
		cout<<"item found!!\n";
	}
}
int binary(int a[], int s, int n)
{
	int mid, low, high;
	low=0;
	high=s-1;
	while(low<=high)
	{
		mid=(low + high)/2;
		if(a[mid]==n)
		{
			return(mid);
		}
		if(n>a[mid])
		{
			low=mid+1;
		//	return(low);
		}
		else
		{
			high=mid-1;
		//	return(high);
		}
	}
	return(-1);
}
