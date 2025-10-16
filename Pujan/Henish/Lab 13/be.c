#include"stdio.h"

void main() {

    int n,i,j;

    printf("Enter no. of rows : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        if(i==1||i==n){
        
            for(j=1;j<=n;j++){
            
                printf("*");

            }

        }

        if(i!=1||i!=n){

            for(j=1;j<=n;j++){
                if(j==1||j==n){
                    printf("*");
                }
                else{
                    printf(" ");
                }

            }

        }

        printf("\n");

    }

}