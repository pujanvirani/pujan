#include"stdio.h"

void main(){
    
    int n,i,j;

    printf("Enter no. of rows : ");
    scanf("%d",&n);

    for(i=n;i>=1;i--){

        for(j=n-i;j>=1;j--){

            printf(" ");

        }
        
        for(j=i;j>=1;j--){

            printf("* ");

        }

        printf("\n");

    }

}