#include<stdio.h>
#include<conio.h>
//Factorial 
void main()
{
	int x,i,a=1;
	
	printf("Enter a number\n");
	scanf("%d",&x);
	for(i=x;i>0;i--)
	{
		a = a*i;
	}
	printf("%d is factorial of %d",a,x);
	getch();
}
