#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	printf("Enter a number\n");
	scanf("%d",&i);
	if(i>0)
	{
		printf("It is a positive number");
	}
	else
	{
		if(i<0)
		{
			printf("It is a negative number");
			
		}
		else
		{
			printf("It is zero");
		}
	}
	getch();
}
