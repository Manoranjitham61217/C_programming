#include<stdio.h>
int main()
{
	int n,org,rem;
	int arm=0;
	printf("Enter the number=");
	scanf("%d",&n);
	org=n;
	while(n!=0)
	{
		rem=n%10;
		arm=(rem*rem*rem)+arm;
		n/=10;
	}
	if(org==arm)
	{
		printf("\nThe given number is armstrong");
	}
	else{
		printf("\nThe given number is not a armstrong");
	}
	
}