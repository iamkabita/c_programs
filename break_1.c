#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
void main()
{
	int i=1,x;
	while(i<=5)
	{
		printf("Entre a number");
		scanf("%d",&x);
		if(x>0){
			break;			
		}
		
		i++;
	}
	if(i == 6){
		printf("End normally");
	}else{
		printf("Break Appied");
	}
	getch();
}
