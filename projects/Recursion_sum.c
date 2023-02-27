#include<stdio.h>
#include<conio.h>

int sum(int n)
{
	int s;
	if(n>0)
	{
		s = n+ sum(n-1);
		return (s);
	}
}
void main()
{
	int x,p;
	printf("Enter a number\n");
	scanf("%d",&x);
	p = sum(x); 
	printf("Sum of %d natural numbers is %d",x,p);
	getch();
}
