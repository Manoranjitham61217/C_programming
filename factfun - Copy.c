#include<stdio.h>
int print(int n)
{
	if(n==1)
	   return 1;
	else
	   return n*print(n-1);
}
int main()
{
	int n;
	printf("Enter the number to find factorial =");
	scanf("%d",&n);
	printf("The factorial of %d is %d",n,print(n));
}
