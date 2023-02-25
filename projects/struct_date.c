#include<stdio.h>
#include<conio.h>

struct date
{
	int d,m,y;
};
struct time
{
	int hr,min;
};
void main()
{
	struct date d1;
	struct time t1;
	printf("Enter Present date and Time\n");
	scanf("%d/%d/%d",&d1.d,&d1.m,&d1.y);
	scanf("%d:%d",&t1.hr,&t1.min);
	printf("Date : %d/%d/%d\n",d1.d,d1.m,d1.y);
	printf("Time : %d:%d",t1.hr,t1.min);
	
	getch();
}
