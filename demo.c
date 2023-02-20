#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
main()

{
    
	int choice, a,b,s;
	while(1)
	{
	printf("\n 1. Addition");
	printf("\n 2. Odd- Even");
	printf("\n 3. printing n numbers");
	printf("\n 4. exit");
	
	printf("\n \n Entre your choice");
	scanf("%d",& choice);
	switch (choice)
	{
		case 1 : 
		printf("Entre two numbers");
		scanf("%d %d",&a,&b);
		s=a+b;
		printf("\nsum is %d",s);
		break;
		
		case 2 :
			printf("Entre a number");
			scanf("%d",&a);
			if(a % 2 ==0)
			   printf("Even number");
			else
			   printf("Odd number");
			break;
			
		case 3 :
				printf("Entre a number");
				scanf("%d",&a);
				for(b=1;b<=a;b++)
				printf("%d",b);
				break;
				
		case 4 :exit(0);
				
				default :
					printf("Invalid choice");
				
	}
	
	getch();
}
}
	

	
