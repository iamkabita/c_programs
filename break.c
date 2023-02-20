#include<stdio.h>
#include<conio.h>
//PRIME NUMBER
void main()
{
	int i,number;
	printf("Enter a number ");
	scanf("%d",&number);
	
	for(i=2;i<number;i++)
	{
		if(number % i==0)
		{
			break;
		}
	}
	
	if(i==number)
	{
		printf("prime number");
	}
	else
	{
		printf("composit number");
	}
	
	
	
	getch();
}
	
	
