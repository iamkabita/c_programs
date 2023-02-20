#include<stdio.h>
#include<conio.h>
// SWAPPING TWO NUMBERS WITHOUT USING THIRD VARIABLE
void main()
{
	int a,b;
	printf("Enter two number  ");
	scanf("%d %d",&a,&b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("a = %d and b = %d",a,b);
	getch();
}
