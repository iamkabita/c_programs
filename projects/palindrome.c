#include<stdio.h>
#include<conio.h>
//PALINDROME NUMBER
void main()
{
	int n,t,ld,fd,d;
	int isPalindrome = 1;
	printf("Enter a number ");
	scanf("%d",&n);
	printf("Enter number of digit ");
	scanf("%d",&d);
	t = 1;
	int cnt = d-1;
	
	while(cnt){
		t = t*10;
		cnt--;
	} 
	
	while (n > 10)
	{
		ld = n % 10;
		fd = n/t;

		if(ld==fd)
		{
			n = n % t;
			n = n/10;
			t = t/100;
		}
		else
		{
			isPalindrome = 0;
			break;
		}
	}
	if(isPalindrome ==1)
	    {
		    printf("It is a Palindrome number");
	    }
	else 
	    {
			printf("It is not a Palindrome number");
		}
	getch();
		
		
	
	
}
