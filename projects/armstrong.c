#include<stdio.h>
#include<conio.h>

void main()
{
	int t,d=0,cunt,x,a=1,sum=0;

    printf("Enter the number  ");
    scanf("%d",&x);
    
    int y = x;
    
    while(y != 0){
    	y = y/10;
    	d++;
	}
	y=x;

    while(x != 0)
        {  
	        t = x % 10;
	        x = x/10;
	        for(cunt=1;cunt<=d;cunt++)
	           {
		           a = a*t;
	           }
	           
	                      
	        sum = sum + a;
	        a=1;
	       
        }
    if (sum == y)
    {
    	printf("It is a Armstrong number");
	}
	else
	{
		printf("It is not a Armstrong number");
	}
    
    getch();
}

/* Armstrong number
153
3 digit
1^3 + 5^3 + 3^3
1  +  125 + 27
153 */





