#include "stdio.h"

void main() {
    int n;
    printf("Enter size of an array : ");
    scanf("%d",&n);

    int a[n],i;
    for(i=0;i<n;i++){
        printf("Enter Element: ");
        scanf("%d",&a[i]);
    }

    int count=0;

    for(i=0;i<n;i++){
        if(a[i]%3==0){
            count++;
        }
    }

    printf("Total no. divisible by 3: %d",count);
    
}