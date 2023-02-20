#include<stdio.h>
#include<conio.h>
//Binary to decimal
void main()
{
	int n,no,d=0,i,t=1,x,sum=0;
	printf("Enter binary number\n");
	scanf("%d",&no);
	n = no;
	while(n>0)
	{
		n = n/10;
		d++;
	}
	n = no;
	for(i=1;i<=d;i++)
	{
		x = n % 10;
		sum = sum + (x*t);
		t = t*2;
		n = n/10;
	}
	printf("%d",sum);
	getch();
}
