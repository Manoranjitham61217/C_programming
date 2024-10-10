#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the nth value=");
	scanf("%d",&n);
	int a=0,b=1;
	int c=a+b;
	printf("Fibonacci Series: %d %d ",a,b);
	for(i=3;i<=n;i++)
	{
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;
	}
}
