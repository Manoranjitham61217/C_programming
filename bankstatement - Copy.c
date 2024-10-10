#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct bankdet
{
	float balance;
	char name[25];
	char accno[17];
};
struct bankdet a;
void create_account();
void deposite(float d_amount);
void cash_withdraw(float w_amount);
float balance_enquiry();
int main()
{
	int f=1,c;
	float amt;
	while(f==1){
		printf("1-create_account\n2-deposite\n3-cash_withdraw\n4-balance_enquiry");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				create_account();
				break;
			case 2:
				printf("Enter the amount to be deposited :");
				scanf("%f",&amt);
				deposite(amt);
				break;
			case 3:
				printf("Enter the amount to be withdrawn :");
				scanf("%f",&amt);
				cash_withdraw(amt);
				break;
			case 4:
				printf("Your balance %f\n",balance_enquiry());
				break;
			default:
				f=0;
				break;
		
		}
	}
}
void create_account()
{
	printf("Enter Name :");
	scanf("%s",a.name);
	printf("\nEnter Account_no :");
	scanf("%s",a.accno);
	a.balance=1000.0;
}
void deposite(float d_amount)
{
	a.balance=a.balance+d_amount;
	printf("Amount Succesfully Deposited \n");
}
void cash_withdraw(float w_amount)
{
	if(w_amount<=a.balance)
	{
		a.balance=a.balance-w_amount;
		printf("Amount Succesfully withdrawn \n");
	}
} 
float balance_enquiry()
{
	return a.balance;
}
