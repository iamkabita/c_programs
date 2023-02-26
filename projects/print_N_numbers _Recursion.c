#include<stdio.h>
#include<conio.h>

void printN(int n)
{
	if (n>0) //Base case
	{
		printN(n-1); //Recursive case
		printf("%d ",n);
	}
}

void main()
{
	int x;
	printf("Enter number\n");
	scanf("%d",&x);
	printN(x);
	getch();
}
