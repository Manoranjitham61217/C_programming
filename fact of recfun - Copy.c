#include<stdio.h>
int sum(int x)
/*{
	if(x==0)
	    return 1;
	else
	    return x*fact(x-1);
}
int main()
{
	int f=fact(5);
	printf("%d",f);
}*/
{
	if(x==0)
	    return 0;
	else
	    return x+sum(x-1);
}
int main()
{
	int s;
	printf("Enter the value=");
	scanf("%d",&s);
	sum(&s);
	printf("%d",sum);
}