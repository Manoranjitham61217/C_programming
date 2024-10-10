#include<stdio.h>
int main()
{
	char name;
	printf("Enter the customer name:");
	scanf("%s",&name);
	int id;
	printf("\nEnter the customer Id:");
	scanf("%d",&id);	
	float unit,c;
	printf("\nEnter the unit value:");
	scanf("%f",&unit);
	if(unit<=199){
		c=unit*1.20;
		printf("Charge= %f",c);
	}
	else if(unit==200 && unit<400){
		c=unit*1.50;
		printf("Charge= %f",c);
	}
	else if(unit==400 && unit<600){
		c=unit*1.80;
		printf("Charge= %f",c);
	}
	else{
		c=unit*2.00;
		printf("Charge= %f",c);
	}
	if(c>400)
	c+=c*15/100;
	printf("\nfinal Charge= %f",c);
}