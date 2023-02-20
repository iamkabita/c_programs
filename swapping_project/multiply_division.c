#include<stdio.h>
#include<conio.h>
//SWAPPING TWO NUMBERS USING  MULTIPLICATION AND DIVISION
void main()
{
	int a,b;
	printf("Enter number of a\n a = ");
	scanf("%d",&a);
	printf("Enter number of b\n b = ");
	scanf("%d",&b);
	a = a*b;
	b = a/b;
	a = a/b;
	printf("a = %d and b = %d",a,b);
	getch();
}
