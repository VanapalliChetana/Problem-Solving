#include<stdio.h>
//int main(){
//	float c=1.25;
//	if(c==1.25){
//		printf("yes");
//	}
//	else{
//		printf("No");
//	}return 0;
//}
///next one
//int a=10,b=15,c=20,d=25,f=50,e=30;
//printf((a=b)?(c==d):(e==f));
//printf((a==b)?(c=d):(e=f));
//return 0;
//}
///next one
//void main(){
//	int a=0,b=2;
//	if(a=1) //if it is 0 means that condtion is false
//		b=0;
//	else
//	    b*=10;
//	printf("%d %d ",a,b);
//	
//}
///next one
//int a=4%2;
//printf("%d",a);
//}
///nextone
//#include <stdio.h>
//int main(){
//char c='a';
//switch(c){
//    case 97:
//         printf("97");
//         break;
//    case 'b':
//         printf("98");
//         break;
//    case 99:
//         break;
//    default:
//         printf("end");
//}
//return 0;
//}
//#include<stdio.h>
//int main(){
////     int x=10;
////     do{
////         x++;
////     }
////     while(x++<15);
//    
////         printf("%d",x);
//    
////     return 0;
//// }
//int a=1;
//printf("%d\n",sizeof(a++));
//printf("%d",a);
//return 0;
//}
#include <stdio.h>
int main(){
//	int a,b=10;
//a=printf("%d",b);
//printf("\n%d",a);
//return 0;
//}
//int x=0,i,y,j,n;
//scanf("%d",&n);
//for(i=1;i<=n;i++){
//	y=x^i;
//	printf("%d\n",y);
//}
//
//return 0;
//}
//for(i=0;i<1;i++){
//	for(j=0;j<n;j++){
//		x=i^j;
//	}
//	
//}
//printf("%d",x);
//return 0;
//}
//int n;
//scanf("%d",&n);
//if(n%4==1) 
//   printf("%d",1);
//if(n%4==2) 
//   printf("%d",n+1);
//if(n%4==3) 
//   printf("%d",0);
//if(n%4==0) 
//   printf("%d",n);
//return 0;
//}
//int x=0,a,b;
//printf("enter a value:");
//scanf("%d",&a);
//printf("enter b value:");
//scanf("%d",&b);
//void call(){
//	x=a^(a+1);
//	a++;
//}
int x=0,l,r;
int mail(int n){
	if(n%4==1) 
   printf("%d",1);
if(n%4==2) 
   printf("%d",n+1);
if(n%4==3) 
   printf("%d",0);
if(n%4==0) 
   printf("%d",n);
	
}
scanf("%d",&l);
scanf("%d",&r);
x=mail(r)^mail(l-1);
printf("%d",x);
return 0;
}




