#include<stdio.h>
#include<conio.h>
struct Que
{
	int a[5];
	int r,f;
	
}
p;
void push(int x)
{
	if((p.r+1)%5==p.f)
	{
	printf("overflow");}
	else
	{ p.r=(p.r+1)%5;
	p.a[p.r]=x;
	}
}
int pop()
{
	if(p.f==p.r)
	printf("underflow");
	else
	{
		p.f=(p.f+1)%5;
		return(p.a[p.f]);
	}
	
}
void show()
{  int c;
	for(c=(p.f+1)%5;c<(p.r+1)%5;c=(c+1)%5)
	 {
	printf("%d\t",p.a[c]);
	 }
}
int main()
{
int a,n,x,i;
while(1)
{

printf("\nenter 1 for push \t enter 2 for pop \t 3 for show\n");
scanf("%d",&a);
switch (a)
{
	case 1:    	printf("enter value\t");
		scanf("%d",&n);
		push(n);
				break;
	case 2: n=pop();
			printf("\npopped element: %d",n);
	break;
	case 3: show();
	break;
	default: return 0;
}

}
}



