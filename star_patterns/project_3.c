#include<stdio.h>
#include<conio.h>
//DIAMOND SHAPE

void main()
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=6;j++)
        {
            if(j>=7-i)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        
        }
        printf("\n");

    }
    for(i=1;i<=6;i++)
    {
        printf(" ");
    
        for(j=1;j<=5;j++)
        {
            if(j>=i)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        
        }
        printf("\n");

    }


    getch();
}