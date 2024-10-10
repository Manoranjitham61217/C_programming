#include<stdio.h>
int main(){
	int a,multiple,i;
	scanf("%d",&a);
	for(i=1;i<=10;i+=1)
	{
		multiple=a*i;
		printf("%d * %d = %d\n",a,i,multiple);
	}
}