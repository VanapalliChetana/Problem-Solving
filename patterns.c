#include<stdio.h>
//int main(){
//	int n,i,j;
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//	}
//int main(){
//	int n,i,j;
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		for(j=0;j<=i;j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//	}
//int main(){
//	int n,i,j;
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		for(j=0;j<n-i;j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//	}
//int main(){
//	int n,i,j,k;
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		for(k=0;k<n-i;k++){
//			printf(" ");
//		}
//		for(j=0;j<=i;j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//	}
//int main(){
//	int n,i,j,k;
//	scanf("%d",&n);
//	int space=n;
//	for(i=1;i<=n;i++){
//		for(k=1;k<i;k++){
//			printf(" ");
//		}
//		for(j=1;j<=space;j++){
//			printf("* ");
//		}
//		space--;
//		printf("\n");
//	}
//	return 0;
//	}
//int main(){
//	int n,i,j,k;
//	scanf("%d",&n);
//	int totcol;
//	for(i=0;i<2*n;i++){
//	totcol=i>n?2*n-i:i;
//		for(j=0;j<totcol;j++){
//			printf("* ");
//		}
//		
//		printf("\n");
//	}
//	return 0;
//	}
//int main(){
//	int n,i,j,k;
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//	for(k=0;k<n-i-1;i++){
//		printf(" ");
//	
//		for(j=0;j<i;j++){
//			printf("* ");
//		}
//}
//		printf("\n");
//	}
//	return 0;
//	}
//int main(){
//
//	int n,i,j;
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		for(j=0;j<=i;j++){
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//	return 0;
//	}
//int main(){
//
//	int n,i,j,k;
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		for(k=0;k<n-i-1;k++){
//			printf(" ");
//		}
//		for(j=1;j<=2*i+1;j++){
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//	return 0;
//	}
int main(){

	int n,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		
		for(j=0;j<2*(n-i)-1;j++){
				for(k=0;k<2*i;k++){
			printf(" ");
		}
		
			printf("%d",j);
		}
	
		printf("\n");
	}
	return 0;
	}
