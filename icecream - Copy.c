#include<stdio.h>
int main()
{
	int n;
	do{
	    printf("ICE CREAM FLAVOURS");
	    printf("\n1.CHOCOLATE\n 2.VENNILA\n 3.STRAWBERRY\n 4.BUTTERSCOTCH\n 5.BLACKCURRENT\n");
	    scanf("%d",&n);
	    switch(n){
	    	case 1:
	    		printf("CHOCOLATE");
	    		break;
	    	case 2:
	    		printf("VENNILA");
	    		break;
	    	case 3:
	    		printf("STRAWBERRY");
	    		break;
	    	case 4:
	    		printf("BUTTERSCOTCH");
	    		break;
	    	case 5:
	    		printf("BLACKCURRENT");
	    		break;
	    	default:
	    		printf("Your order is ready");
	    		break;
		}
		printf("\n");
	}while(n<=5 && n>0);
}