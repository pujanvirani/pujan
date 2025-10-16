#include "stdio.h"

void main() {
    int i,count=0;
    char c;

    char a[100];
    printf("Enter a string");
    scanf("%s",a);

    printf("Enter character you want to search: ");
    scanf("%c",&c);

    for(i=0;a[i]!=0;i++) {
        if(a[i]==c){
            printf("Character you want is at index %d",i);
            count++;
            break;
        }
    }

    if(count==0){
        printf("Character not found!");
    }

}