#include<stdio.h>
void main(){
    int n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
    int b[n];
    for(i=0;i<n;i++){
        b[i]=a[i];
    }
    for(i=0;i<n;i++){
        printf("b[n]=%d",*(b+i));
    }
}