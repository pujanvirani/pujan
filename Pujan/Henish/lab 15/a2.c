#include "stdio.h"

void main() {
    int i,a[10],count=0;

    printf("Enter 10 Numbers: ");

    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(a[i]<0){
            count++;
        }
    }

    printf("Total Negative No. : %d",count);

}