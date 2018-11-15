#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
class prime
{
	private:
		int n,k,i;
		public:
			prime(int);
			void clc();
			void disp();
};
prime::prime(int x)
{
	n=x;
}
void prime::clc()
{
	k=1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		k=0;
		break;
	}
	
 } 
 void prime::disp()
 {
 	if(k==1)
 	cout<<n<<"is prime";
 	else 
 	cout<<n<<"is not prime";
  }
  int main()
{
  	prime p;
  	p.clc();
  	p.disp();
  	
  }
