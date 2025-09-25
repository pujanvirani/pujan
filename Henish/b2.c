#include "stdio.h"

void main() {
    int i,n;
    
    printf("Enter a no. : ");
    scanf("%d",&n);

    for(i=0;n!=0;i++) {
        n=n/10;
    }

    printf("digits = %d",i);

}