#include<stdio.h>
#include<conio.h>


void sum(int a,int b, int *x){
	*x = a + b;
	
}


void main(){
	int a, b, c;
	printf("Enter two numbers\n");
	scanf("%d %d", &a, &b);
	sum(a, b, &c);
	
	printf("sum is %d", c);
}
