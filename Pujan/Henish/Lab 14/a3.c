#include"stdio.h"

void main() {
    
    int i,n,ec=0,oc=0;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++){
        printf("Enter no. : ");
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        
        if(arr[i]%2==0){
            ec++;
        }
        else{
            oc++;
        }

    }

    printf("Even no. = %d\nOdd no. = %d",ec,oc);

}