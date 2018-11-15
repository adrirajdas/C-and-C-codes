#include<iostream>
using namespace std;
int main()
{
	int i,j,ar[10];
for(i=0;i<5;i++)
{
	cin>>ar[i];
}
int min=ar[0];
for(i=0;i<5;i++)
{
	if(ar[i]<min)
	{
		min=ar[i];
	}
}
cout<<min;
return(0);
}
