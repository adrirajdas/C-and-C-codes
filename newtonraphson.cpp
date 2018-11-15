#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) (x)*(x)*(x)-9*(x)+1
#define g(x) 3*(x)*(x)-9
int main()
{
    float x1=0, a=f(x1), m, m1, b;
    float x=x1, c, d;
    if(a==0)
    {
            printf("%.3f", x1);
    }
  
    else
    {
        do
        {
            c=f(x);
            d=g(x);
            m=x-(c/d);
            m1=f(m);
            b=m-x;
            if(m1==0);
            else
            x=m;
        }
        while(fabs(b)>0.0005);
    }
    printf("the root is:\t%.3f", m);
    getch();
}   
