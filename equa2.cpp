#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) (x)*(x)*(x)-9*(x)+1
int main()
{
    float x1=0, x2=1, a=f(x1), b=f(x2), m, m1;
    do
    {
          m=(x1+x2)/2;
          printf("%f\t", m);
          m1=f(m);
          if(m1>0)
          {
               x2=m;
          }
          else if(m1<0)
          {
               x1=m;
          }
          else
          {
              printf("%.3f", m);
          }                
    }
    while(fabs(x1-x2)>0.0005);
    printf("%.3f", m);
    getch();
} 
