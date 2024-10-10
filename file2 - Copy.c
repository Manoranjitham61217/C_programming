#include<stdio.h>
#include<string.h>
int main()
{
FILE *f1, *f2;
f1 = fopen("pst2.txt","r");
char file_data[100];
fgets(file_data, 100, f1);
printf("Data printed in pst2.txt %s",file_data); 
f2 = fopen("write.txt","w");
fprintf(f2,file_data);
printf("\nData printed in write.txt %s",file_data);
fclose(f1);
fclose(f2);
return 0;
}
