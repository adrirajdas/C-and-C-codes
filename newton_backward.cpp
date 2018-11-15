#include<stdio.h>
#include<conio.h>
#define f(x) (x)*(x)*(x)*(x)
int main()
{
	int a[10],n,i,d[10],j,g[10];
	printf("enter the range=");
	scanf("%d",&n);
	printf("enter x=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("|%d|",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("|%d|",f(a[i]));
	}
	printf("\n");
	for(j=0;j<n;j++)
	{
	for(i=0;i<n-1;i++)
	{
		d[i]=f(a[i+1])-f(a[i]);
		g[i]=d[i+1]-d[i];
		printf("|%d|",d[i]);
	//	printf("\n");
	//	printf("|%d|",g[i]);	
	}
		printf("\n");
	}
	
	
}
