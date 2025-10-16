#include "stdio.h"

void main(){
    int a[3][3],i,j,pc=0,nc=0,zc=0;
    printf("Enter elements in array\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Index %d%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]>0){
                pc++;
            }
            else if(a[i][j]==0){
                zc++;
            }
            else {
                nc++;
            }
        }
    }

    printf("total %d positive, %d negative, %d zero count.",pc,nc,zc);
    
}