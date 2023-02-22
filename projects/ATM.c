#include<stdio.h>
#include<conio.h>
//AUTOMATED TELLER MACHINE (ATM)
void main()
{
	int choice,end=1,amount=0,balance=50000, pin,pasword=1234,newpin,conformpin;
	while(end==1)
	{
		printf("\n1.Withdraw Amount\n");
		printf("2.Check current balance\n");
		printf("3.Change your pin\n");
		printf("4.Exit\n\n");
		
		printf("Enter your choice\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter Amount\n");
				scanf("%d",&amount);
				printf("Enter your pin");
				    scanf("%d",&pin);
			    	if(pin!=pasword)
				      {
					    printf("Enter correct pin");
				      }
				    else
				      {
					    printf("Transaction successful\n");	
			    	    balance = balance - amount;
			    	    printf("Your current balance is %d\n",balance);
					
			          }
				    
				    break;
				
			case 2:
					printf("Enter your pin\n");
				    scanf("%d",&pin);
			    	if(pin!=pasword)
				      {
					    printf("Enter correct pin\n");
				      }
				    else
				      {
			    	    printf("Your current balance is %d\n",balance);
					
			          }
				    
				    break;
			case 3:
				printf("Enter your current pin\n");
				scanf("%d",&pin);
				if(pin==pasword)
				{
					printf("Type your new pin\n");
					scanf("%d",& newpin);
					printf("Conform your pin\n");
					scanf("%d",& conformpin);
					if(newpin == conformpin)
					{
						printf("Your new pin is %d",newpin);
					}
					else
					{
						printf("Type your correct new pin");
					}
				}
				else
				{
					printf("Type your correct pin");
				}
				pasword = newpin;
				break;
			case 4:
				end = 0;
				break;
			default :
				printf("Enter correct option");
				
		}
		
	}
	getch();
}
