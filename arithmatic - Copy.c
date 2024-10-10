#include<stdio.h>
int main()
{
	int a,b;
	float add;
	float sub;
	float multi;
	float div;
	float modulus;
	float square;
	float square1;
	printf("a=");
	scanf("%d",&a);
	printf("\nb=");
	scanf("%d",&b);
	add=a+b;
	sub=a-b;
	multi=a*b;
	div=a/b;
	modulus=a%b;
	square=a*a;
	square1=b*b;
	printf("\nAddition of numbers= %f",add);
	printf("\nDifference of numbers= %f",sub);
	printf("\nProduct of numbers= %f",multi);
	printf("\nDivison of numbers= %f",div);
	printf("\nRemainder of numbers= %f",modulus);
	printf("\nSquare of a= %f",square);
	printf("\nSquare of b= %f",square1);
	return 0;
}