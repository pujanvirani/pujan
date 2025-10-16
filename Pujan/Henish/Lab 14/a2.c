#include"stdio.h"

void main() {
    
    int i,n,pc=0,nc=0,zc=0;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++){
        printf("Enter no. : ");
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        
        if(arr[i]>0){
            pc++;
        }
        else if(arr[i]<0){
            nc++;
        }
        else{
            zc++;
        }

    }

    printf("pc = %d\nnc = %d\nzc = %d",pc,nc,zc);

}