#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
	int a,b,choice;
	while(1)
	{
		printf("\n 1. Odd number");
    	printf("\n 2. Even number");
    	printf("\n 3. Exit");
	
	
	printf("\n \n Enter your choice");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Enter a number");
	        scanf("%d",&b);
			for(a=1;a<=b;a++)
			{
				if(a%2 == 1)
				{
					printf("%d\n",a);
				}
				
			}
			break;
		case 2:
			printf("Enter a number");
	        scanf("%d",&b);
			for(a=1;a<=b;a++)
			{
				if(a%2 == 0)
				{
					printf("%d\n",a);
				}
			}
			break;
			
		case 3: exit(0);
			
	}
	
	getch();
	
	}
	
	
}
