#include<stdio.h>
int main()
{
	int n,r,q;
	int sun=0;
	printf("Enter the Number: ");
	scanf("%d",&n);
	q=n;
	while(q>0)
	{
		r=q%10;
		q=q/10;
		sum=sum+r;
	}
}