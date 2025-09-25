#include<stdio.h>
void main(){
    int i,n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    for(i=0;n!=0;i++){
        n=n/10;
    }
    printf("%d",i);
}