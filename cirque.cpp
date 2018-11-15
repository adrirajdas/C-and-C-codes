#include<stdio.h>
#include<conio.h>
# define size 6
struct queue
{
	int list[size];
	int r,f;
}q;
void incert(int);
int del(int*);
void show();
int main()
{
	int data,opt,flg;
	q.f=size-1;
	q.r=size-1;
	while(1)
	{
		printf("\n1. insert\n");
		printf("\n2. delete\n");
		printf("\n3.display\n");
		printf("\n4.exit\n");
		printf("\nenter the option=\n");
		scanf("%d",&opt);
		if(opt==1)
		{
			printf("enter data=");
			scanf("%d",&data);
			incert(data);
		}
		if(opt==2)
		{
			flg=del(&data);
			if(flg==1)
			{
				printf("%d\n",data);
			}
		}
		if(opt==3)
		{
			show();
		}
		if(opt==4)
		{
			return(0);
		}
	}
	getch();
	return(0);
}
void incert(int d)
{
	if((q.r+1)% size==q.f)
	{
		printf("queue overflow\n");	
	}	
	q.r=(q.r+1)%size;
	q.list[q.r]=d;
}
int del(int *d)
{
	if(q.f==q.r)
	{
		printf("queue underflow\n");
	}
	q.f=(q.f+1)%size;
	*d=q.list[q.f];
	return(1);
}
void show()
{  int c;
	for(c=(q.f+1)%5;c!=(q.r+1)%5;c=(c+1)%5)
	 {
	printf("%d\t",q.list[c]);
	 }
}

