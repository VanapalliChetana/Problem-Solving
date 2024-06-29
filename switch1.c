#include<stdio.h>
int main(){
	int amount=1000;
	int n,d,w;
	while(1){
		printf("\n1.check\n 2.Deposit\n 3.Withdraw\n 4.Exit\n");
		scanf("%d",&n);
	
	switch(n){
		case 1:
			printf("Balance %d",amount);
			break;
		case 2:
			printf("Deposit Money:");
			scanf("\n%d",&d);
			amount=amount+d;
			break;
		case 3:
			printf("Withdraw money:");
			scanf("\n%d",&w);
			if(w>amount)
			 printf("\ninsufficient Bal");
			amount=amount-w;
			break;
	    case 4:
	    	n=0;
	    default:
	    	printf("None");
	    	return 0;
	    	
	}
	}
	return 0;
}
