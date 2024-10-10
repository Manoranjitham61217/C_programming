#include<stdio.h>
void display () {
    printf ("1 - Addition\n"); 
	printf ("2 - Subtraction\n"); 
	printf ("3 - Multiplication\n"); 
	printf ("4 - division\n"); 
	printf ("5 - Modulus\n"); 
	printf ("6 - a square\n"); 
	printf ("7 - b square\n");
}
int main () { 
    int n,a,b;
	printf ("Enter the number a: ");
    scanf ("%d", &a);
    printf ("Enter the number b: ");
    scanf("%d",&b);
    printf ("operator selection keynumbers:\n"); display ();
    printf ("\nselect the operator : "); 
	scanf ("%d", &n);
    switch(n) {
        case 1:
            printf("Add--> %d", a+b); break;
        case 2:
            printf("Sub--> %d", a-b); break;
        case 3:
            printf("Mul--> %d", a*b); break;
        case 4:
            printf("div--> %d", a/b); break;
        case 5:
            printf("Mod--> %d", a%b); break;
        case 6:
            printf("squ1--> %d", a*a); break;
        case 7:
            printf("squ2--> %d", b*b); break;} return 0;
}
