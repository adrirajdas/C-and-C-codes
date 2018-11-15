#include<iostream>
#include<conio.h>
using namespace std;
void factorial(long int,long int);
int main()
{
	long int n,f=1;
    cout<<"enter the  number=";
    cin>>n;
    factorial(n,f);
	getch();
}
void factorial(long int n, long int f)
{long int i;
for(i=1;i<=n;i++)
{f=f*i;
}
cout<<"\n\nthe factorial is ="<<f;
}
	

