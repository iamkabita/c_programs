#include<stdio.h>
#include<conio.h>

void main()
{
	char n;
	printf("Enter month number\n");
	scanf("%c",&n);
	switch(n)
	{
		case 'a' ... 'k':
		    printf("Grade 1");
			  break; 
		case 'l' ... 'z':
			printf("Grade 2");
			break;
			
		default:
			printf("Invalid number");
	}
	getch();
	
}
