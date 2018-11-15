#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct link
{
	int a;
	struct link*next;
}*h=0,*q=0,*p=0;
void insert()
{
	p=(struct link*)malloc(sizeof(struct link));
	cin>>p->a;
	p->next=NULL;
	if(h==NULL)
	{
		h=p;
	}
	else
	{
		q=h;
		while((q->next)!=NULL)
		{
			q=q->next;			
		}
		q->next=p;
		
	}
}
void display()
{
	q=h;
	while(q!=NULL)
	{
		cout<<q->a<<"\n";
		q=q->next;
	}
}
int main()
{
	int n;
	while(1)
	{
	cout<<"enter the option=";
	cin>>n;
	switch(n)
	{
		case 1:{
			insert();
			break;
		}
		case 2:{
			display();
			break;
		}
	}
	}
	getch();
}
