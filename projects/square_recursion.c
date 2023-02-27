#include<stdio.h>
#include<conio.h>

void square(int n)
{
	if(n>0)
	{
		square(n-1);
		printf("%d\t ",n*n);
	}
}

void main()
{
	int x;
	printf("Enter a number\n");
	scanf("%d",&x);
	square(x);
	getch();
}
