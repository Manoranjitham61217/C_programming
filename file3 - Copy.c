#include<stdio.h>
#include<string.h>
int main()
{
FILE *fptr;
fptr = fopen("pst2.txt","r");
char file_data[100];
fgets(file_data, 100, fptr);
printf("%s", strupr(file_data));
fclose(fptr);
return 0;
}
