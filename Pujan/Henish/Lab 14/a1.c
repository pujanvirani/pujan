#include"stdio.h"

void main() {
    
    int i,n;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++){
        printf("Enter no. : ");
        scanf("%d",&arr[i]);
    }

    printf("In normal order : ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("In reverse order : ");
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}