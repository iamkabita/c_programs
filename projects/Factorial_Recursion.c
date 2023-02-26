#include<stdio.h>
#include<conio.h>

int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	return (n * fact(n-1));
}

void main()
{
	int x;
	printf("Enter a number\n");
	scanf("%d",&x);
	printf("Factorial of %d is ",x);
	printf("%d",fact(x));
	getch();
}
