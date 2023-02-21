#include<stdio.h>
#include<conio.h>

void main()
{
	sub();
	getch();

}
void sub()
{
	int a,b,c;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		c=a-b;
	}
	else
	{
		c= b-a;
	}
	printf("Differenc between two numbers is %d",c);
}
