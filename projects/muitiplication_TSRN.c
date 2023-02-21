#include<stdio.h>
#include<conio.h>
//TAKE SOMETHING RETURNS NOTHING

void multiply(int,int);
void main()
{
	int a,b;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	multiply(a,b);
	
}
void multiply(int x,int y)
{
	int z;
	z= x*y;
	printf("Multiply of two numbers is %d",z);
}
