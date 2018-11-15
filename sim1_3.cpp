#include<iostream>
#define f(x) (x)*(x)
using namespace std;
int main()
{
	float a[10][10],s1=0,s2=0,s3=0,m1,m2,res,h;
	int l1,l2,i;
	printf("enter the limits =");
	scanf("%d%d",&l1,&l2);
	printf("enter the value of x=\n");
	for(i=0;i<8;i++)
	{
		scanf("%f",&a[0][i]);	
	}
	printf("x");
	for(i=0;i<8;i++)
	{
		printf("|%f",a[0][i]);
	}
	printf("\ny");
	for(i=0;i<8;i++)
	{
		printf("|%f",f(a[0][i]));
	}
	if(l1>l2)
	{
		cout<<"sorry!";
		return(0);
	}
	else
	h=(float)(l2-l1)/8.0;
	s1=(f(a[0][0])+f(a[0][5]));
	for(i=1;i<=8;i++)
	{
		if(i%2==0)
		{
			s2=s2+f(a[0][i]);
		}
		else
		{
			s3=s3+f(a[0][i]);
		}
	}
	cout<<"\n"<<s1<<"\n"<<s2<<"\n"<<s3<<"\n"<<h;
	m1=2*s2;
	m2=4*s3;
	cout<<"\n"<<m1<<"\n"<<m2;
	res=((h/3)*(s1+m1+m2));
	printf("\nresult=%f",res);
	cout<<"\n"<<res;
}
