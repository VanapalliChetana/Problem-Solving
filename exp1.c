#include<stdio.h>
#include<conio.h>
int main(){
    int w;
    // printf("enter weight:");
    scanf("%d",&w);
    if(w%2!=0 || w==2){
        printf("No");
    }
    else{
        printf("Yes");
    }
    return 0;
}
