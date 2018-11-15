#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string>
using namespace std;
class books
{
	int bno,pr,noc;
	char bname[100];
	char pub[100];
	char author[100];
	int x,m,h;
public:
	//books()
	//{
	//	bname[7]='meluha';
	//	pub[20]='westland ltd.';
	//	author[8]='amish';
	//	bno=10;
	//	noc=10;
	//	pr=225;
	//}
void input()
{
	cout<<"enter the name of the book=";
	gets(bname);
	cout<<"enter the publisher=";
	gets(pub);
	cout<<"enter the name of the author=";
	gets(author);
	cout<<"enter the book no.=";
	cin>>bno;
	cout<<"enter the number of copies=";
	cin>>noc;
	cout<<"enter the price=";
	cin>>pr;
}
void deposit()
{
if(noc>0)
   { x=noc++;
    cout<<"\n\ninserted" <<x;}
	else
	{cout<<"enter the no. of copies=";
	cin>>noc;
	 } 
}
	void output()
	{
		cout<<"the book name="<<bname;
		cout<<"\n\nthe book no.="<<bno;
		cout<<"\n\nthe publisher="<<pub;
		cout<<"\n\nthe author="<<author;
		cout<<"\n\nthe price="<<pr;
	}
	void returnbook()
    {
    if(noc<0)
    {
    cout <<" n";
    return;
    }
    cout <<"removed\n\n";
	noc--;
    if(noc>0)
	{cout<<"the book can be issued";}
	else
	{cout<<"the book can't be issued";
	}
    }
    void display(int k)
    {
    if(noc<=0)
    {
    cout<<"\n\n !!no copies left!!";
    return;
    }
    cout<<"\n\nthe no.copies left=";
    m=noc;
    if(m==-1)
    {cout<<noc;
	}
	else
	{cout<<m-1;
	}
    }
	};
    int main()
	{
	//	books();
		books b;
		int n,k;
		b.input();
		int i;
		while(1)
		{cout<<"***********************";
		cout<<"\n\nenter the option:";
		cout<<"\n\n1.deposit\n\n2.return book\n\n3.output\n";
		cin>>n;
		cout<<"***********************";
		switch(n)
		{
			case 1:{b.deposit();
				break;}
			case 2:{b.returnbook();
				break;}
			case 3:{b.output();
			b.display(k);
				break;}
			default:cout<<"!!wrong choice!!";
			}
		}
			getch();
		}
			
		
	


