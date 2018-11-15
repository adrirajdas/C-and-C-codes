#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct link
{
	int a,pos;
	struct link*next;
	struct link*pre;
}*h=0,*q=0,*p=0,*d=0,*t=0,*n=0,*m=0;
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
void first()
{
	d=(struct link*)malloc(sizeof(struct link));
	cin>>d->a;
	d->next=h;
	h=d;
}
void anywhere(int k)
{
	n=(struct link*)malloc(sizeof(struct link));
	m=h;
	cout<<"enter the value=";
	cin>>n->a;
	if(m->next==NULL)
	{
		cout<<"not available!!";
	}
	else
	{
		while((m->next)!=NULL)
		{
			if((m->next)->a==k)
			{
				break;
			}
			m=m->next;
		}
		n->next=m->next;
		m->next=n;
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
	int n,pos;
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
			first();
			break;
		}
		case 3:{
			cout<<"enter the value before which value is to be entered=";
			cin>>pos;
			anywhere(pos);
			break;
		}
		case 4:{
			display();
			break;
		}
		case 5:{
			return(0);
			break;
		}
	}
	}
	getch();
}
