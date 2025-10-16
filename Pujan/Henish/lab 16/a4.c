#include "stdio.h"

void main(){
    int m,n;
    printf("Enter order of matrix : ");
    scanf("%d",&m);
    printf("*");
    scanf("%d",&n);


    int a[m][n],b[m][n],i,j;
    
    printf("Enter elements of 1st matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Index %d%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter elements of 2nd matrix\n");
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Index %d%d : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            a[i][j] = a[i][j]+b[i][j];
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }

}