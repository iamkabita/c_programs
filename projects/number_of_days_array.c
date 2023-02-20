#include<stdio.h>
#include<conio.h>

void main()
{
	char week[8][10]={"0","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	int n;
	printf("Enter Week number\n");
	scanf("%d",&n);
	printf(" %s is week number of %d",week[n],n);
	getch();
}
