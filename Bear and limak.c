#include<stdio.h>

//	int a=500,b=100,c;
//	if(!(a>=400))
//	    b=300;
//	c=200;
//	printf("%d %d",b,c);
//	return 0;
//	
//}
int main(){
//int x=10;
//float y=10.0;
//if(x==y)
//	printf("equal");
//
//else
//	printf("not equal");
//
//return 0;
//}
//if condition
//char ch;
//if(ch=printf("_"))
//printf("single");
//else
//	printf("no");
//	return 0;
//}
//multiple initializations should not work
//int a=b=c=10;
//a=b=c=20;
//printf("%d %d %d",a,b,c);
//return 0;
//}
//bear and Limak 
int a,b,c=0;
scanf("%d %d",&a,&b);
while(a<=b){
	b*=2;
	a*=3;
	c++;
}
printf("%d",c);
return 0;
}

