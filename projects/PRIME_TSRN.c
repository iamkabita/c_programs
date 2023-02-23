#include<stdio.h>
#include<conio.h>
//Function to find next prime number and print prime numbers between two numbers
void prime(int ,int);
int printprime(int);
void main()
{
	int x,y,p;
	printf("Enter a number\n");
	scanf("%d",&x);
	p= printprime(x);
	printf("Next prime number is %d",p);
	
	printf("\n\nEnter range from x to y\n");
	scanf("%d %d",&x,&y);
	prime(x,y);
	getch();
}

void prime(int a, int b)
{
	int j, it;
	printf("Prime numbers are\n");
	for(it=a;it<=b;it++)
	{
		for(j=2;j<it;j++)
		{
			if(it % j ==0)
			{
				break;
			}
		}
		if(j==it)
		{
			printf("%d\n",it);
			
		}
	
	}
}

int printprime (int a)
{
	int j;
	a++;
	while(1)
	{
		for(j=2;j<a;j++)
		{
			if(a%j==0)
			{
				break;
			}
		}
		if(j==a)
		{
			return a;
			
		}else{
			a++;
		}
		
	}
	
}
