#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	if(n>10)
	{
		printf("It is greater than 10");
	}
	else
	{
		if(n>5)
		{
			printf("It is greater than 5");
		}
		else
		{
			if(n>0)
			{
				printf("It is greater than 0");
			}
			else 
			{
				if(n==0)
				{
					printf("It is less than zero");
				}
				else
				{
					if(n>-5)
					{
						printf("It is less than zero");
					}
					else
					{
						printf("It is less than 5");
					}
					
				}
			}
		}
	}
	getch();
}
