#include"stdio.h"

void main() {
    
    int i,n,max,min,sum=0;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];
    
    for(i=0;i<n;i++){
        printf("Enter no. : ");
        scanf("%d",&arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
        if(min>arr[i]){
            min = arr[i];
        }
    }

    printf("max = %d\nmin = %d\n",max,min);

    for(i=0;i<n;i++){
        sum = sum + arr[i];
    }

    printf("Sum = %d\nAvg = %f",sum,sum/(float)n);

}