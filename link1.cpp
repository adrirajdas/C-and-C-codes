#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct link
{
	int a;
	struct link*next;
} *h,*q,*p;
int main()
{
	int n;
	while(1)
	{
	cout<<"enter the option=";
	cin>>n;
	switch(n)
	{
		case 1:
		   	{
				cout<<"enter=";
				p= (struct link*)malloc(sizeof(struct link));
				cin>>p->a;
				p->next=NULL;
				if (h==NULL)
				{
					h=p;
				}
				else
				{
					q=h;
					while((q->next)!=NULL)
					{
						q = q->next;
					}
					q->next=p;
				}	
			
				break;
			}
			case 2:
				{
					cout<<"enter=";
					p=(struct link*)malloc(sizeof(struct link));
					cin>>p->a;
					p->next=NULL;
					p->next=h;
					h=p;
					break;
				}
			case 3:
				{
					q=h;
					while(q!=NULL)
					{
						cout<<q->a<<"\n";
						q=q->next;
					}
					break;
				}
			case 4:
				{
					return(0);
				}
	}
	}
}
