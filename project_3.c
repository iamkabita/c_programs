#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	printf("Enter a year ");
	scanf("%d",&x);
	
	if(x%4 == 0)
	{
		if(x%100 == 0)
		
		{
			if(x%400 == 0)
			{
				printf("This year is a leap year");
			}
			
			else
			{
				printf("This year is not a leap year");
			}
		}
		
		else
		{
			printf("This year is a leap year");
		}	
		
	}
	
	else
	{
		printf("This year is not a leap year");
	}
	
	getch();
	
	
}
