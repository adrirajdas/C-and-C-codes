#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10], i, j, k, n, t;
	printf("Enter the array: \n");
	scanf("%d", &a[0]);
	for(i=1; i<10; i++)
	{
		scanf("%d", &n);
		t=0;
		for(j=0; j<i; j++)
		{
			if(a[j]>n)
			{
				for(k=9; k>=j; k--)
				{
					a[k]=a[k-1];
				}
				t=1;
				a[j]=n;
				break;
			}
		}
		if(t==0)
		{
			a[i]=n;
		}
	}
	printf("Your sorted array is: ");
	for(i=0; i<10; i++)
	{
		printf("%d \t", a[i]);
	}
	getch();
	return(0);
}

