#include"stdio.h"

void main() {

    int n,i,j;
    char c='A';

    printf("Enter no. of rows : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        for(j=1;j<=n-i;j++){

            printf(" ");

        }
        
        for(j=1;j<=i;j++){

            if(i%2==0){
                printf("%c ",c++);
            }
            else{
                printf("%d ",j);
            }

        }

        printf("\n");

    }

}