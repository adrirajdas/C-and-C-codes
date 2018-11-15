#include<stdio.h>
#include<conio.h>
void convert(long i, long base)
{
	long remainder;
	if(i!=0)
	{
		remainder=i%base;
		convert(i/base, base);
		if(remainder>9)
		{
			printf("%c", (char) remainder+55);
		}
		else
		{
			printf("%d", remainder);
		}
	}
}

int main()
{
	long n, b;
	printf("Enter the number:\t");
	scanf("%ld", &n);
	printf("Enter the desired base:\t");
	scanf("%ld", &b);
	if(b>36)
	{
		printf("Error");
		return 0;
	}
	else
	{
		convert(n, b);
	}
	getch();
	return 0;
}
