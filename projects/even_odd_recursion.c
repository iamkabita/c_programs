#include<stdio.h>
#include<conio.h>

void Even(int n)
{
	int s;
	if(n>0)
	{
		Even(n-1);
	    printf("%d\n",n*2);		
	}
}

void odd(int n)
{
	if(n>0)
	{
		odd(n-1);
		printf("%d\n",n*2+1);
	}
	
}

void main()
{
	int x;
	printf("Enter a number\n");
	scanf("%d",&x);
	printf("Even numbers are\n");
	Even(x);
	printf("\n\nOdd numbers are\n");
	odd(x);
	getch();
}
