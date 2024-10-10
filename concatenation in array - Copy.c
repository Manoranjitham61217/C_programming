#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	printf("Bride name :");
	gets(a);
	printf("Groom name :");
	gets(b);
	int i,j;
	for(i=0;a[i]!='\0';i+=1);
	
		for(j=0;b[j]!='\0';j+=1)
		{
			a[i]=b[j];
			i=i+1;
		}	
	a[i]='\0';
	printf("%s",a);
/*	strcat(a,b);
	printf("%s",a);*/
}