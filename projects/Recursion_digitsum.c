#include<stdio.h>
#include<conio.h>

int digitsum(int n)
{
	int sum;
	if(n>0)
	{
		sum = n%10 + digitsum(n/10);
		return (sum);
	}
	
}

void main()
{
	int result;
	printf("Enter a number\n");
	scanf("%d",&result);
	printf("Sum of digit is %d",digitsum(result));
	getch();
}
