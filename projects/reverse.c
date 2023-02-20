#include<stdio.h>
#include<conio.h>
//Reverse 
void main()
{
	int n,rev=0,x,i;
	printf("Enter a number  ");
	scanf("%d",&x);
	n = x;
	while(n !=0)
	{
		i = n % 10;
		rev = (rev*10) + i;
		n = n/10;
	}
	
	printf("%d is reverse of %d",rev,x);
	getch();
}
