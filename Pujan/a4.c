#include<stdio.h>
void main (){
    int x,y,i,ans=1;
    printf("Enter base of x: ");
    scanf("%d",&x);
    printf("Enter power of y: ");
    scanf("%d",&y);

    for(i=1;i<=y;i++){
        ans=ans*x;
    } printf("%d^%d=%d\n",x,y,ans);
}