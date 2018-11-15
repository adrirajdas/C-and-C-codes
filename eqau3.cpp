#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (x)*(x)-5
int main()
{
    float x1=2, x2=3, a=f(x1), b=f(x2), m, m1;
    float p=x1, q=x2;
    do
    {
          for(int i=0; i<5; i++)
          {
                  m=((x2-x1)/5)+x1;
                  m1=f(m);
                  if(m1>0)
                  {
                      q=m;
                      break;
                  }
                  else if(m1<0)
                  {
                      p=m;
                  }
          }
          x2=q;
          x1=p;
    }
    while(fabs(x2-x1)>0.0005);
    printf("%.3f", m);
    getch();
}                      
