#include<stdio.h>
#include<conio.h>
//TAKES NOTHING RETUEN SOMETHING

int multiply();
int main()
{
	int m;
	m = multiply();
	printf("Multiply of two numbers is %d",m);
	return 0;
}
int multiply()
{
	int a,b,c;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	c = a*b;
	return c;
}
