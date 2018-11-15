#include<stdio.h>
#include<conio.h>
struct stack
{
	int a[10];
	int t;
}st;
void push()
{
	int x;
	if(st.t<10)
	{
		printf("Enter the nummber to be inserted:\t");
		scanf("%d", &x);
		st.a[st.t]=x;
		st.t++;
	}
	else
	{
		printf("Overflow \n");
	}

}
int pop()
{
	int j;
	int k=st.a[0];
	if(st.t>0)
	{
		for(j=0; j<st.t; j++)
		{
			st.a[j]=st.a[j+1];
		}
		st.t--;
		return(k);
	}
	else
	{
		printf("Underflow \n");
	}
}
int main()
{
	int n, i, d, z;
	st.t=0;
	while(1)
	{
		printf("Enter\n1 for Insertion\n2 for Deletion\n3 for Display\n0 to Exit\n");
		scanf("%d", &n);
		switch(n)
		{
			case 1:
			{
				push();
				break;
			}
			case 2:
			{
				z=pop();
				printf("%d has been deleted from the queue\n", z);
				break;
			}
			case 3:
			{
				for(i=0; i<st.t; i++)
				{
					printf("%d\t", st.a[i]);
				}
				printf("\n");
				break;
			}
			default:
			{
				printf("Invalid");
				break;
			}
			case 0:
			{
				return 0;
			}
		}
	}
}

