#include<stdio.h>
#include<string.h>
int main()
{
FILE *f1, *f2,*f3;
f1 = fopen("aids.txt","r"); 
char f1_data[100];
fgets(f1_data, 100, f1);
f2 = fopen("write.txt","r"); 
char f2_data[100];
fgets(f2_data, 100, f2);
f3 = fopen("app_file.txt","w"); 
fprintf(f3,f1_data);
f3=fopen("app_file.txt","a"); 
fprintf(f3, f2_data);
fclose(f1); 
fclose(f2); 
return 0;
}
