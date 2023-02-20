#include<stdio.h>
#include<conio.h>
//HOLLOW SQUARE

void main()
{
	int i,j,line;
	printf("Enter no. of line");
	scanf("%d",&line);
	for(i=1;i<=line;i++)
	{
		for(j=1;j<=line;j++)
		{
			if(j==1||j==line||i==1||i==line)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	getch();
}
