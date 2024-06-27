#include<stdio.h>
//int main(){
//	int n,i;
//	printf("enter n:");
//	scanf("%d",&n);
//	for(i=0;i<11;i++){
//		if(i%2==0){
//			printf("even %d\n",i);
//		
//		}
//		if(i%2!=0){
//			printf("odd %d\n",i);
//		}
//	}
//	return 0;
//	}
//int main(){
//	int x;
//	for(x=-1;x<=10;x++){
//		if(x<5){
//			continue;
//		}
//		else{
//			break;
//		}
//		printf("bf");
//	}
//	return 0;
//}
//loops
int main(){
	int x;
	for(x=-1;x<=10;x++){
		if(x<5){
			printf("%d\n",x);
			continue;
		}
		else{
			break;
		}
		
		printf("bf");
		
	}
	return 0;
}
