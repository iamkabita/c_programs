#include<stdio.h>
#include<conio.h>
// REVERSE DIGIT PRINT VERTICAL 
void main()
{
	int x;
	printf("number ");
	scanf("%d",&x); // 549
	
	while( x != 0)
	{
		int d = x % 10;
		printf("%d\n",d);  // 9 4 5
		
		x = x/10;   // 0
		
	}
	   
	
	
	
	
	getch();
}
