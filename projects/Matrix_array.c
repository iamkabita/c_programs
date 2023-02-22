#include<stdio.h>
#include<conio.h>

void main()
{
	int k,l;
	int arr1[3][3],arr2[3][3],result[3][3];
	printf("Enter 9 digit for matrix 1\n");
	for(k=0;k<=2;k++)
	{
		for(l=0;l<=2;l++)
		{
			scanf("%d",&arr1[k][l]);
			
		}
	}
	
	printf("Enter 9 digits for matrix 2\n");
	for(k=0;k<=2;k++)
	{
		for(l=0;l<=2;l++)
		{
			scanf("%d",&arr2[k][l]);
		}
	}
	
	for(k=0;k<=2;k++)
	{
		for(l=0;l<=2;l++)
		{
			result[k][l] = arr1[k][l] + arr2[k][l];
			printf("%4d",result[k][l]);
		}
		printf("\n");
	}
	getch();
	
}
