#include "stdio.h"

void main(){
    int m1,n1,m2,n2;
    printf("Enter order of 1st matrix : ");
    scanf("%d",&m1);
    printf("*");
    scanf("%d",&n1);

    printf("Enter order of 2nd matrix : ");
    scanf("%d",&m2);
    printf("*");
    scanf("%d",&n2);

    if(n1==m2) {
        int a[m1][n1],b[m2][n2],i,j;
    
        printf("Enter elements of 1st matrix\n");
        
        for(i=0;i<m1;i++){
            for(j=0;j<n1;j++){
                printf("Index %d%d : ",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        }

        printf("Enter elements of 2nd matrix\n");
    
        for(i=0;i<m2;i++){
            for(j=0;j<n2;j++){
                printf("Index %d%d : ",i+1,j+1);
                scanf("%d",&b[i][j]);
            }
        }

        int ans[m1][n2],sum=0;

        for(i=0;i<m2;i++){
            for(j=0;j<n2;j++){
                for(int k=0;k<n1;k++){
                    sum += a[i][k]*b[k][i];        
                }
                ans[i][j]=sum;
                sum=0;
            }
        }

        for(i=0;i<m1;i++){
            for(j=0;j<n2;j++){
                printf("%3d ",ans[i][j]);
            }
            printf("\n");
        }

    }

}