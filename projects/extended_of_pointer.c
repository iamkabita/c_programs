#include<stdio.h>
#include<conio.h>

void main()
{
	int x = 10,*p,**q,***r;
	p = &x;
	q = &p;
	r = &q;
	printf("%d\n",x);
	printf("%d\n",&x);
	printf("%d\n",q);
	**q=7;
	printf("%d",x);
	
}
