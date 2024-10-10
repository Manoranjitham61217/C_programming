#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              	                  // Reading input from STDIN
	printf("Input number is %d.\n", num);
	int i;
	int fact=1;
	for (i=1;i<=num;i++){
		fact=fact*i;
	}
	printf(fact);       // Writing output to STDOUT
}
