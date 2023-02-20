#include<stdio.h>
#include<conio.h>
//SWAPPING TWO NUMBERS USING  THIRD VARIABLE
void main()
{
	int a,b,c;
	printf("Enter number of a\n a = ");
	scanf("%d",&a);
	printf("Enter number of b\n b = ");
	scanf("%d",&b);
	c = a;
	a = b;
	b = c ;
	printf("a = %d and b = %d",a,b);
	getch();
}
