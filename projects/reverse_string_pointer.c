#include<stdio.h>
#include<conio.h>

int length(char *p)
{
	int i;
	for(i=0;*(p+i) != '\0';i++);
	return (i);	
}
char *reverse (char *p)
{
	int j,i;
	char t;
	for(j=0;*(p+i) !='\0';j++)
	{
		for(i=0;i<j/2;i++)
		{
			t = *(p+i);
			*(p+i) = *(p+j-1-i);
			*(p+j-1-i) = t;
		}
	}
	return (p);
}

void main()
{
	int l;
	char ch[9];
	printf("Enter Character\n");
	scanf("%s",&ch);
	l = length(&ch);
	printf("%d",l);
	printf("\n %s",reverse(ch));
	getch();
}
