#include<stdio.h>
#include<conio.h>
//TAKE SOMETHING RETURN SOMEHING
int month2(int);
int main()
{
	int n,m;
	printf("Enter month number\n");
	scanf("%d",&n);
	
	printf("Through if condition\n");
	m = month(n);             // function call (if condition )	  
	printf("It has %d days",m);
	
	
    printf("\n \nThrough Array\n");
    m = month2(n);             // function call.(Array).
    printf("It has %d days",m);
    
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
// Through Array.
int month2(int x)
{
	int y;
	int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	y= month[x];
	return y;	
}
