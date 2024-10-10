#include<stdio.h>
int main()
{
	int n,i,rem;
	int dig=0;
	printf("Enter the value n:");
	scanf("%d",&n);
    while(n!=0)
    {
    	rem=n%10;
    	dig=dig+1;
    	n=n/10;
	}
	printf("count of digits in number = %d",dig);
}