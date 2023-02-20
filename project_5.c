#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,a;
	printf("Enter a number ");
	scanf("%d",&x);
	printf("\n");
	for(a=1;a<=10;a++)
	{
		y=a*x;
		printf("%d \n",y);
	}
	
	getch();
}
