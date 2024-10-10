#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[100];
	gets(a);
	int n,i,j,v=0,c=0;
	strlwr(a);
	n=strlen(a);
	for(i=0;i<n;i+=1)
	{
		if(isalpha(a[i])){
			if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' )
		    	v+=1;
		    else
	        	c+=1;
		}
	}
	printf("Count of vowels = %d",v);
	printf("\nCount of consonents = %d",c);
}