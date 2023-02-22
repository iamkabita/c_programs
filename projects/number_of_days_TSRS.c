#include<stdio.h>
#include<conio.h>
//TAKE SOMETHING RETURN SOMEHING

int main()
{
	int n,m;
	printf("Enter month number\n");
	scanf("%d",&n);
	m = month(n);
	if(m==0)
	{
		printf("Invalid month number");
	}
	else
	{
	   printf("It has %d days",m);
    }
	return 0;
}
int month (int x)
{
	int y=1;
	if(x==1||x==3||x==5||x==7||x==8||x==10||x==12)
	{
		y=31;
	}
	else if(x==4||x==6||x==9||x==11)
	{
		y=30;
	}
	else if(x==2)
	{
		y = 28;
	}
	else
	{
		y=0;
	}
	return y;
	
}
