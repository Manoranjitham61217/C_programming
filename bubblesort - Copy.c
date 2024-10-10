#include<stdio.h>
int main()
{
	int n,ars[10];
    int j,i;
	printf("Enter the number of values=");
	scanf("%d",&n);
	for(i=0;i<n;i+=1)
	{
        printf("\nEnter the value for index %d=",i);
        scanf("%d",&ars[i]);
    }
	for(i=0;i<n;i+=1)
    {
	 
        for(j=0;j<n-i-1;j+=1)
        {
        	if(ars[j]>ars[j+1])
        {
        	int temp;
        	temp=ars[j];
        	ars[j]=ars[j+1];
        	ars[j+1]=temp;
		}
	    }
    }
    printf("\nSorted array");
    
        for(i=0;i<n;i+=1){
    	    printf("\n%d",ars[i]);
    	}
}