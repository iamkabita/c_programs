#include<stdio.h>
#include<conio.h>

int fib(int n)
{
	if(n==1||n==2)
	{
		return (n-1);
	}
 	return (fib(n-1)+fib(n-2));
}

void main()
{
	int x;
	printf("Enter a number upto 45\n");
	scanf("%d",&x);
	printf("%dth terms of fibonacci series is %d",x,fib(x));
	getch();
}
