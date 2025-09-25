#include<stdio.h>
void main (){
    int i,n,sum=0;
    printf("Enter a Number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("%d\n",sum);
}