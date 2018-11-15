#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{ int n,i,j;
float ar[100][100],nm,dm,x,y;
printf("enter the number of elements ");
scanf("%d",&n);
for(i=0;i<n;i++)
{ printf("enter x then y ");
scanf("%f",&ar[i][0]);
scanf("%f",&ar[i][1]); }
printf("enter the valuse of X for which Y is to be found"); 
scanf("%f",&x);
y=0;
for(i=0;i<n;i++)
{ nm=1;
dm=1;
for(j=0;j<n;j++)
{ if(j!=i)
nm=nm*(x-ar[j][0]); }
for(j=0;j<n;j++)
{ if(j!=i)
dm=dm*(ar[i][0]-ar[j][0]); }
printf("\n#%f %f",nm,dm);
y=y+((nm/dm)*ar[i][1]); }
printf("\nThe required value is is\t%f",y);
getch();
return 0; }
