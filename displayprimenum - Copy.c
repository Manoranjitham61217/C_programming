#include<stdio.h>
int main()
{
	int n,ars[10];
    int j,i;
	int flag=0;
	printf("Enter the number of values=");
	scanf("%d",&n);
	for(j=0;j<n;j+=1)
	{
        printf("\nEnter the value for index %d=",j);
        scanf("%d",&ars[j]);
		for(i=2;i<ars[j];i+=1)
		{
			if(ars[j]%2==0){
				flag=1;
				break;
			}
			else{
				flag=0;
			}
		}
	if(flag==0){
		break;
	}
    }
   	printf("%d ",ars[j]);
}