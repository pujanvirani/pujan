#include"stdio.h"

void main() {
    
    int i,n;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++){
        printf("Enter no. : ");
        scanf("%d",&a[i]);
    }

    int temp;

    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
       
    }

    for(i=0;i<n;i++){
         printf("%d ",a[i]);
    }

}