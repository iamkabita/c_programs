#include<stdio.h>
#include<conio.h>

void main()
{
	int a,range,x;
	printf("Enter range ");
	scanf("%d",&range);
	printf("Enter a number ");
	scanf("%d",&a);
	
	for(x=1;x<=range;x++)
	{
		if(x%a ==0)
		{
			printf("%d\n",x);
		}
	}
	
	getch();
	
}
