#include "stdio.h"

void main(){
    int a[2][10],i;
    printf("Enter roll no. and marks of students\n");
    for(i=0;i<3;i++){
        printf("Roll no. : ");
        scanf("%d",&a[0][i]);
        printf("Marks : ");
        scanf("%d",&a[1][i]);
    }

}