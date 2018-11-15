#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int i,n,sum=0,f=1,s=0,add;
	cout<<"enter the number:-";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		f=f*i;
		if(n%i==0)
		{
			sum=sum+(pow(n,i/2)/f);
			if(i%2==0)
			{
				s=s+(pow(n,i)/f);
				add=sum-s;
			}
		}
	}
	cout<<f;
	cout<<"\nresult="<<sum<<"\nresult="<<s<<"\nresult"<<add;
	return(0);
}
