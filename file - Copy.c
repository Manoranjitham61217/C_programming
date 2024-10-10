#include<stdio.h>
int main()
{
	FILE *Fptr;
	char a[100];
	Fptr=fopen("AIDS.txt","w");
	fprintf(Fptr,"ARTIFIAL INTELLIGENCE AND DATA SCIENCE");
	fclose(Fptr);
	Fptr=fopen("AIDS.txt","r");
	fgets(a,100,Fptr);
	printf("%s",a);
	fclose(Fptr);
}