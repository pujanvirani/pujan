#include "stdio.h"

void main(){
    int a[3][3],i,j;
    printf("Enter elements in array\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Index %d%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }

}