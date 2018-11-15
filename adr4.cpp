#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i;
	for(i=10;i<=100;i++)
	{if(i%6==0 && i%4!=0)
	 {
	 cout<<i<<"\t";
	 }
	 }
	getch();
}
