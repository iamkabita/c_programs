#include<stdio.h>
#include<conio.h>

int binary(int n)
{
	int x,sum,t;
    
	if(n==1||n==0)
	{
		x = n%10;
		sum = x*t + binary(n-1);
		t = t*2;
		return (sum);
	}
	
			
	
}

void main()
{
	printf("%d",binary(101));
	
	getch();
}
