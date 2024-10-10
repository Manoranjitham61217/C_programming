#include<stdio.h>
int main()
{
	int a[100][100],n,i,j;
	int b[100][100],c[100][100];
	printf("Enter the value=");
	scanf("%d",&n);
	for(i=0;i<n;i+=1)
	{
	    for(j=0;j<n;j+=1)
	    {
		    printf("Enter the 'a' matrix value for i,j %d%d=",i,j);
		    scanf("%d",&a[i][j]);
	    }
	    printf("\n");
    }
    for(i=0;i<n;i+=1)
    {
    	for(j=0;j<n;j+=1)
 	    {
		    printf("Enter the 'b' matrix value for i,j %d%d=",i,j);
		    scanf("%d",&b[i][j]);
    	}
     	printf("\n");
    }
    for(i=0;i<n;i+=1)
    {
        for(j=0;j<n;j+=1)
        {
        	c[i][j]=a[i][j]+b[i][j];
        	printf(" %d%d",i,j);
        	printf("-%d ",c[i][j]);
        }
        printf("\n");
    }
}