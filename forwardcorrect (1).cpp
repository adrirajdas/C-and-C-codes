#include<iostream>
#include<conio.h>
#include<math.h>
#define f(x) (x)*(x)
using namespace std;
unsigned long int factorial(int);
int main()
{
    int i,j,x,h=2;
    float t=1,s=0,ts;
    float n[100];
    unsigned long int c;
    int a[11][10];
   /* cout<<"enter the factiorial:";
    cin>>n;*/
    
    for(i=0;i<5;i++)
    {
                     cin>>a[0][i];
    }
    for(i=0;i<5;i++)
    {
                     a[1][i]=f(a[0][i]);
    }
    cout<<"\n";
    for(i=0;i<2;i++)
    {
                    for(j=0;j<5;j++)
                    {
                                    cout<<a[i][j]<<"\t";
                    }
                    cout<<"\n";
    }          
    cout<<"\n";
    for(i=2;i<5;i++)
    {
                     for(j=0;j<5;j++)
                     {
                                      a[i][j]=a[i-1][j+1]-a[i-1][j];
                                      cout<<a[i][j]<<"\t";
                     }
                     cout<<"\n";
    }
                                      
    cout<<"\n\n\n";
    //clrscr();                           
    for(i=0;i<5;i++)
    {
                    for(j=0;j<5-i;j++)
                    {
                                    cout<<a[i][j]<<"\t";
                    }
                    cout<<"\n";
    }          
    cout<<"enter the value of x:";
    cin>>x;
    ts=a[0][1];
    for(i=1;a[i+1][0]!=0;i++)
    {
                    t=t*(x-a[0][i-1]);
                    cout<<t<<"\n";
                    s=(t/(factorial(i)*( pow(h,i))))*(a[i+1][0]);
                    ts=ts+s;
    }   
    cout<<ts; 
    
    getch();
}
unsigned long int factorial(int n)
{
   unsigned long int f=1;
   int i;
    for(i=1;i<=n;i++)
    {
                    f=f*i;
    }
    return(f);
}

    
    
