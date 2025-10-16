#include "stdio.h"

void main() {
    
    int arr[10],sum=0;

    for(int i=0;i<10;i++){
        printf("Enter Element : ");
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<10;i++){
        sum = sum + arr[i];
    }

    float avg = sum/10;
    int count=0;

    for(int i=0;i<10;i++){
        if(avg<arr[i]){
            count++;
        }
    }

    printf("No. greater than avg = %d",count);

}