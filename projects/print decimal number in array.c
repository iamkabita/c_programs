#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
    float a[5];
    printf("Enter 5 no.\n");
    for(i=1;i<=5;i++)
    {
    	scanf("%f",&a[i]);
	}
	printf("The array is: \n");
	for (i=1;i<=5;i++)
	{
		printf("%.1f\n",a[i]);
	}
    
	getch();
}
