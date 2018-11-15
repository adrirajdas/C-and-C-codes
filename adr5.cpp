#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	struct student
	{
		char name[100];
		int m1,m2,m3,roll;
		float total,avg;
	}
	rp[20];
	int i;
	for(i=0;i<3;i++)
	{
		cout<<"enter the name=";
		cin>>rp[i].name;
		cout<<"enter the roll no.=";
		cin>>rp[i].roll;
		cout<<"enter the first mark=";
		cin>>rp[i].m1;
		cout<<"enter the second mark=";
		cin>>rp[i].m2;
		cout<<"enter the third mark=";
		cin>>rp[i].m3;
		rp[i].total=rp[i].m1+rp[i].m2+rp[i].m3;
		rp[i].avg=(rp[i].total/3);
	}
	for(i=0;i<3;i++)
	{if(rp[i].avg>60)
	cout<<rp[i].name<<"\t"<<rp[i].roll<<"\twith\t"<<rp[i].avg<<"%\n\n";
	}
	getch();
	}

