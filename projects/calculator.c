#include<stdio.h>
#include<conio.h>
//calculator  function type(TAKES NOTHING RETURNS NOTHING)
	void add()
	{
		int a,b,c;
		printf("Enter two numbers\n");
		scanf("%d %d",&a,&b);
		c = a+b;
		printf("Sum of two numbers is %d",c);
	}
	void sub()
	{
		int a,b,c;
		printf("Enter two numbers\n");
		scanf("%d %d",&a,&b);
		c =a-b;
		printf("Difference between two numbers is %d",c);
		
	}
	void multiply()
	{
		int a,b,c;
		printf("Enter two numbers\n");
		scanf("%d %d",&a,&b);
		c = a*b;
		printf("Product of two numbers is %d",c);
	}
	void division()
	{
		float a,b,c;
		printf("Enter dividend and divisor numbers\n");
		scanf("%f %f",&a,&b);
		c = a/b;
		printf("Quotient is %.2f",c);
	}
	
void main()
{
	int choice,end=1;
	while(end == 1)

	{
		printf("\n\n1.Addition\n");
	    printf("2.Subtraction\n");
    	printf("3.Multiplication\n");
    	printf("4.Division\n");
    	printf("5.Exit\n\n");
	    printf("Enter your choice\n");
	    scanf("%d",&choice);
	
	    switch(choice)
        	{
		        case 1:
			        add();
			        break;
	        	case 2:
			        sub();
			        break;
		        case 3:
		        	multiply();
		        	break;
		        case 4:
		        	division();
			        break;
		        case 5:
		        	end = 0;
		        	break;
					
		        default :
		        	printf("Enter valid number");
			
        	}
    }
}
		
	
	
	
	
