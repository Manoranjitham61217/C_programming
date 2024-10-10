#include<stdio.h>
int happy_number(int n)
{
	int rem,sum;
	while(n!=1 && n!=4){
		sum=0;
	    while(n>0){
		    rem=n%10;
		    sum=sum+(rem*rem);
		    n=n/10;
	    }
	   n=sum; 
    }
    return (n==1);
}

int main()
{
	int n,i;
	printf("Enter the value for n:");
	scanf("%d",&n);
	printf("\nHappy Numbers : ");
	for(i=1;i<=n;i+=1)
	{
		if(happy_number(i)){
			printf("%d ",i);
		}
	}
}
