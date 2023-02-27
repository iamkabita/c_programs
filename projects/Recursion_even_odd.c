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
void main()
{
	int x,m;
	printf("Enter a number\n");
	scanf("%d",&x);
	m = sumEven(x);
	printf("%d",m);
	getch();
}
