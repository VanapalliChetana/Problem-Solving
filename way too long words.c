//#include<stdio.h>
//#include<string.h>
//#define Max_words 100
//int main(){
//	int n,t,i;
//	char words[Max_words][100];
//	printf("enter n value:");
//	scanf("%d",&n);
//	
//	for(int i=0;i<n;i++)
//{
//	printf("enetr word %d",i+1);
//	scanf("%s",words[i]);
//}
//t=strlen(words[i]);
//for(int i=0;i<n;i++){
//	printf("%c%d%c\n",words[i][0],strlen(words[i]),words[i][t-1]);
//
//}
//
//	}
#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_LENGTH 100

int main() {
    int n;
    char words[MAX_WORDS][MAX_LENGTH];
    printf("Enter n value: ");
    scanf("%d", &n);

    // Read n words
    for (int i = 0; i < n; i++) {
        printf("Enter word %d: ", i + 1);
        scanf("%s", words[i]);
    }
    for (int i = 0; i < n; i++) {
        int len = strlen(words[i]);
        printf("%c%d%c\n", words[i][0], len, words[i][len - 1]);
    }

    return 0;
}

	
