#include<stdio.h>
#include<conio.h>


//  1=> 5
//  4  2  1

int btod(int binary,int times)
{
	if(binary == 0){
		return 0;
	}
	
	int value; 
	
	if(binary % 10 == 1){
		value = 1 * times + btod(binary/10, times*2);
	}else{
		value = btod(binary/10, times*2);
	}
	
	return value;
	
		
}

void main()
{
	int binary;
	int times = 1;
	
	printf("Enter binary number: ");
	scanf("%d", &binary);
	
	int result = btod(binary, times);
	
	printf("value in decimal: %d", result);
	
	getch();
}
