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
void reverse(int n)
{
	if(n>0)
	{
		printf("%d ",n);
		reverse(n-1);
	}
}

void main()
{
	int x;
	printf("Enter number\n");
	scanf("%d",&x);
	printf("%d natural numbers are \n",x);
	printN(x);
	printf("\n \n %d reverse natural numbers are \n",x);
	reverse(x);
	getch();
}
