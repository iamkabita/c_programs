#include<stdio.h>
#include<conio.h>

void main()
{
	int math,hindi,eng,sci,social,x;
	float percent;
	printf("Enter your marks in Math ");
	scanf("%d",&math);
	printf("Enter your marks in Hindi ");
	scanf("%d",&hindi);
	printf("Enter your marks in English ");
	scanf("%d",&eng);
	printf("Enter your marks in Science ");
	scanf("%d",&sci);
	printf("Enter your marks in Social ");
	scanf("%d",&social);
	
	x= math+hindi+eng+sci+social;
	printf("Your Total marks is %d\n",x);
	percent= x/5.0;
	printf("Your percentage is %.2f",percent);
	
	getch();	
}
