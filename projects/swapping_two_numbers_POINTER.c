#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("a = %d and b = %d",a,b);
	getch();
}

void swap(int *x,int*y)
{
	int t;
	t = *x;
	*x=*y;
	*y=t;
}
