#include"stdio.h"

void main(){
    
    int n,i,j,a=1;

    printf("Enter no. of rows : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        
        for(j=1;j<=i;j++){

            if(a==0){
                printf("0 ");
                a=1;
            }
            else{
                printf("1 ");
                a=0;
            }

        }

        printf("\n");

    }

}