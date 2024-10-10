#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int b[5]={1,2,3,4,5};
	int i;
	int t=a[4],s=b[0];
	for(i=3;i>=0;i--)
	{
		a[i+1]=a[i];
	}
	a[0]=t;
	printf("\nClockwise rotation of an array: ");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	for(i=0;i<5;i++)
	{
		b[i]=b[i+1];
	}
	b[4]=s;
	printf("\nAnticlockwise rotation of an array: ");
	for(i=0;i<5;i++){
		printf("%d ",b[i]);
	}
}
