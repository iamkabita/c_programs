#include<stdio.h>
#include<conio.h>
//PLUS RECTANGLE SHAPE 
void main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(i==4||i==6||j==4||j==6||i==1&&j==5||i==5&&j==1||i==5&&j==9||i==9&&j==5)
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
