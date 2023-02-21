#include<stdio.h>
#include<conio.h>
//TAKE SOMETHING RETURN SOMETHING

float division(float,float);
int main()
{
	float a,b;
	float D;
	printf("Enter dividend and divisor number \n");
	scanf("%f %f",&a,&b);
	D = division(a,b);
	printf("Quotient is %2f",D);
	return 0;
	
}
float division(float x,float y)
{
	float z;
	z = x/y;
	return z;
}
