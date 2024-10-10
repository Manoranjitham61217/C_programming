#include<stdio.h>
int main(){
	int A=2,B=3,C=4;
	int L,R;
	printf("Value of A= %d",A);
	printf("\nValue of B= %d",B);
	printf("\nValue of C= %d",C);
	L=A*(B+C);
	printf("\nL= %d",L);
	R=(A*C)+(A*B);
	printf("\nR= %d",R);
	if ("L=R"){
		printf("\nL=R \nBoth are equal \nHence proved");
	}
	else{
		printf("\nBoth are unequal");
	}
}