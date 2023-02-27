#include<stdio.h>
#include<conio.h>

int sumEven(int n)
{
	int s;
	if (n>0)
	{
		s = n*2 + sumEven(n-1);
		return (s);
	}
}
int sumOdd(int n)
{
	int s;
	if (n>0)
	{
		s = n*2 +1 + sumOdd(n-1);
		return (s);
	}
}
void main()
{
	int x,m;
	printf("Enter a number\n");
	scanf("%d",&x);
	m = sumEven(x);
	printf("Sum of %d Even numbers is %d",x,m);
	printf("\n\nSum of %d Odd numbers is %d",x,sumOdd(x));
	getch();
}
