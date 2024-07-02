#include<stdio.h>
int main(){
    int a,b[100],c[100],d[100],i,s=0;
    scanf("%d",&a);
    for(i=0;i<3;i++){
        scanf("%d %d %d",&b[i],&c[i],&d[i]);
    
    }
    for(i=0;i<a;i++){
        if(b[i]==1 && c[i]==1 || c[i]==1 && d[i]==1 || d[i]==1 && b[i]==1 ){
            s=s++;
        }
    }
    printf("%d",s);
    
    
    
}
