#include<stdio.h>
#include<conio.h>
//TERM POSITION OF FIBONACCI SERIES
void main()
{
	int term,no;
	printf("enter the term ");
	scanf("%d", &term);
	
	int a=1, b=1, c;
	
	if(term == 1 || term == 2){
		printf("%d",1);
	}else
	
		{
			no = term;
		   for(term = 3;term<=no;term++)
		       {
		        	c = a+b;
		    	    a = b;
			        b = c;
	        	}
	    	printf("%d",c);
    	}
	getch();
}
