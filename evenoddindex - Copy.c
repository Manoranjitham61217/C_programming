#include<stdio.h>
int main()
{
	int n,i,a[10];
	int se=0,so=0;
	printf("Enter the value of n=");
	scanf("%d",&n);
	for(i=0;i<n;i+=1)
	{
		printf("\nEnter the value for index %d=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i+=1)
	{
		if(a[i]%2==0)
		{
			se+=a[i];
		}
		else{
			so+=a[i];
		}
	}
	printf("\nSum of numbers in even index=%d",se);
	printf("\nSum of numbers in odd index=%d",so);
}