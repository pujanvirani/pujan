#include "stdio.h"

void main() {
    int i,n,a=0,b=1,sum=0;

    printf("Enter range : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++) {
        printf("%d, ",sum);
        a=b;
        b=sum;
        sum=a+b; 
    }
    
}