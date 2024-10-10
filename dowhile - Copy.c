#include<stdio.h>
int main()
{
	int n=0,sum=0;
	do{
		sum+=n;
		printf("%d\n",sum);
		printf("Enter the number:");
		scanf("%d",&n);
	}while(n<10 && n>0);
	printf("Sum of n is : %d",sum);
}